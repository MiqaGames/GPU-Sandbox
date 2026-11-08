$ErrorActionPreference = "Stop"

$testsDir = $PSScriptRoot
if ([string]::IsNullOrWhiteSpace($testsDir)) {
    $testsDir = Split-Path -Parent $MyInvocation.MyCommand.Path
}
if ([string]::IsNullOrWhiteSpace($testsDir)) {
    throw "Unable to determine the tests directory from this script's path."
}

$root = Split-Path -Parent $testsDir
$src = Join-Path $root "src"
$gcc = "C:/MSHP/VSCodeWinC/mingw64/bin/gcc.exe"

$jobs = @(
    @{
        Name = "core";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_core.c"), (Join-Path $root "src/components/core/core.c"), "-o", (Join-Path $testsDir "test_core.exe"));
        Run = (Join-Path $testsDir "test_core.exe")
    },
    @{
        Name = "memory";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_memory.c"), (Join-Path $root "src/components/memory/memory.c"), "-o", (Join-Path $testsDir "test_memory.exe"));
        Run = (Join-Path $testsDir "test_memory.exe")
    },
    @{
        Name = "instruction";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_instruction.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), "-o", (Join-Path $testsDir "test_instruction.exe"), (Join-Path $root "src/components/cache/cache.c"));
        Run = (Join-Path $testsDir "test_instruction.exe")
    },
    @{
        Name = "simulator";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_simulator.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), (Join-Path $root "src/components/simulator/simulator.c"), (Join-Path $root "src/components/cache/cache.c"), (Join-Path $src "components/config/config_decoder.c"), (Join-Path $src "external files/cJSON.c"), "-o", (Join-Path $testsDir "test_simulator.exe"));
        Run = (Join-Path $testsDir "test_simulator.exe")
    },
    @{
        Name = "debug";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_debug.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), (Join-Path $root "src/components/debug/debug.c"), (Join-Path $root "src/components/cache/cache.c"), "-o", (Join-Path $testsDir "test_debug.exe"));
        Run = (Join-Path $testsDir "test_debug.exe")
    },
    @{
        Name = "cache";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_cache.c"), (Join-Path $root "src/components/cache/cache.c"), (Join-Path $root "src/components/memory/memory.c"), "-o", (Join-Path $testsDir "test_cache.exe"));
        Run = (Join-Path $testsDir "test_cache.exe")
    },
    @{
        Name = "builder";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_builder.c"), (Join-Path $root "src/components/builder/builder.c"), (Join-Path $root "src/components/memory/memory.c"), "-o", (Join-Path $testsDir "test_builder.exe"));
        Run = (Join-Path $testsDir "test_builder.exe")
    },
    @{
        Name = "config";
        Build = @($gcc, "-std=c11", "-I", $src, "-I", (Join-Path $src "components/config"), (Join-Path $testsDir "test_config.c"), (Join-Path $src "components/config/config_decoder.c"), (Join-Path $src "external files/cJSON.c"), "-o", (Join-Path $testsDir "test_config.exe"));
        Run = (Join-Path $testsDir "test_config.exe")
    }
)

$failed = 0

Push-Location $root
try {
    foreach ($job in $jobs) {
        Write-Host ""
        Write-Host "=== $($job.Name) ===" -ForegroundColor Cyan

        & $gcc @($job.Build | Select-Object -Skip 1)
        if ($LASTEXITCODE -ne 0) {
            Write-Host "Build failed for $($job.Name)" -ForegroundColor Red
            $failed++
            continue
        }

        & $job.Run
        if ($LASTEXITCODE -ne 0) {
            Write-Host "Test failed for $($job.Name)" -ForegroundColor Red
            $failed++
        }
        else {
            Write-Host "Test passed for $($job.Name)" -ForegroundColor Green
        }
    }
}
finally {
    Pop-Location
}

Write-Host ""
if ($failed -gt 0) {
    Write-Host "Summary: $failed test group(s) failed." -ForegroundColor Red
    exit 1
}

Write-Host "Summary: all test groups passed." -ForegroundColor Green
exit 0

# SIG # Begin signature block
# MIIFpwYJKoZIhvcNAQcCoIIFmDCCBZQCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCBfEph1CIhLJMyv
# x0J4JMtxm+dfH9OB1LHDjkbttNlCEqCCAxYwggMSMIIB+qADAgECAhB1//mMRuzX
# vUUYoiEG7pXqMA0GCSqGSIb3DQEBCwUAMCExHzAdBgNVBAMMFlNjaG9vbCBQcm9q
# ZWN0IFNjcmlwdHMwHhcNMjYxMTAxMTA0MzA3WhcNMjcxMTAxMTEwMzA3WjAhMR8w
# HQYDVQQDDBZTY2hvb2wgUHJvamVjdCBTY3JpcHRzMIIBIjANBgkqhkiG9w0BAQEF
# AAOCAQ8AMIIBCgKCAQEA3ToEJEfbOa+/N3T6luI4V67ekIZHE5f4CJfu9/n4VFUl
# HtuE3PMpW1/gXZTfL3yQ4njXEx8TqLI5Bah7QacGTTGOndp9c99wO4bUd36ndd/h
# qRP/vgDSKQ9yPzMf++TFgtGB5z+HJ3io+EW5lYBypLL7H4D2d06cU5HJ9qKRqXie
# Y//d3oOl4kr7vbPqRAoJKoWt/clL8Makba0Ul9TGD7OH99qNMF7XxT4bBQnyAbAc
# f/3Y11i7/uuX+8Rrh2Mme/ltPI2mROUnevxrgsKg+nTyOP4e2ZblXr3IH/SlRcfK
# ZZy2efEstR2kHJs3LD//PgWFtVlsq2BW6jGEp+qV7QIDAQABo0YwRDAOBgNVHQ8B
# Af8EBAMCB4AwEwYDVR0lBAwwCgYIKwYBBQUHAwMwHQYDVR0OBBYEFO4N0H2SOLyT
# hh3FNK9EyZz3lOpoMA0GCSqGSIb3DQEBCwUAA4IBAQCni8TZDh+uh6BHaKtern3w
# QzTe3dFI0dNANlHpJd168Qg1T+n/ksoBP6TK3brseaXQD8wQwLgVpg2K7VzFMzr0
# dP+LwCed7ZMR7BMlqDiEoio0Qu+MgCp5UxxgF4SA5LhgV//bRe8qPltzS3am4k5m
# uT219D57nyuqi2bDl0CkQzKD9qJ0B3yrdObq2zyiZg5KJq6ou8HuZCIaH1WQU2Bo
# eCqEWxs4BXNE8PKn3Z7zavEDGlFHhaHM/2maWapLsZOTSYopVvwCFnGRzPVgGneG
# Vtlf1Z5wAIA0xlUIeAP/dKVf6igRYBpHlKkeIa2qzapJYjMKQUdNM7CT2gbz9A4+
# MYIB5zCCAeMCAQEwNTAhMR8wHQYDVQQDDBZTY2hvb2wgUHJvamVjdCBTY3JpcHRz
# AhB1//mMRuzXvUUYoiEG7pXqMA0GCWCGSAFlAwQCAQUAoIGEMBgGCisGAQQBgjcC
# AQwxCjAIoAKAAKECgAAwGQYJKoZIhvcNAQkDMQwGCisGAQQBgjcCAQQwHAYKKwYB
# BAGCNwIBCzEOMAwGCisGAQQBgjcCARUwLwYJKoZIhvcNAQkEMSIEIAcSvw7vmca7
# LN9Or40+MFdyVYbSt67jwfOeJNtwf9SAMA0GCSqGSIb3DQEBAQUABIIBAH5d7k15
# UOCDQVunL5mjLkI18anLzl8qm/ECBlz4hx47qg8GDmICxkJjufGf5Jz22kOdCn/U
# ouVBAwI43Wa/QgEYrekn/DhDEIItNwwwjt3KwWZvcmURPLXqAE/TsZHGSmcTVCUi
# LwuShlYKM+CtkEHx9ghDUFx4w9Hwx7Z6UcYn09ipuwxPNAW5XgjrMmJuk+w9W9g2
# 25jXe9ybPtflvsKL3FRu08DYZ788eWTZmEY+jI6T34X/wgL8/3pZsdB2QML3UXA7
# gP6I7Uiaxx14tDnb59G3RU8EWitDVojQLbVxpLML3aDkWT9m6MuwMGO3nQpwt8AT
# BB5RHgQ/MHiSuQ8=
# SIG # End signature block



# To run & .\tests\run_all_tests.ps1