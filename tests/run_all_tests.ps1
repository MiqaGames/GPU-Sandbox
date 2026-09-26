$ErrorActionPreference = "Stop"

$root = Split-Path -Parent $PSScriptRoot
$gcc = "C:/MSHP/VSCodeWinC/mingw64/bin/gcc.exe"
$src = Join-Path $root "src"
$testsDir = $PSScriptRoot

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
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_instruction.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), "-o", (Join-Path $testsDir "test_instruction.exe"));
        Run = (Join-Path $testsDir "test_instruction.exe")
    },
    @{
        Name = "simulator";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_simulator.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), (Join-Path $root "src/components/simulator/simulator.c"), "-o", (Join-Path $testsDir "test_simulator.exe"));
        Run = (Join-Path $testsDir "test_simulator.exe")
    },
    @{
        Name = "debug";
        Build = @($gcc, "-std=c11", "-I", $src, (Join-Path $testsDir "test_debug.c"), (Join-Path $root "src/components/core/core.c"), (Join-Path $root "src/components/memory/memory.c"), (Join-Path $root "src/components/instruction/instruction.c"), (Join-Path $root "src/components/debug/debug.c"), "-o", (Join-Path $testsDir "test_debug.exe"));
        Run = (Join-Path $testsDir "test_debug.exe")
    }
)

$failed = 0

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

Write-Host ""
if ($failed -gt 0) {
    Write-Host "Summary: $failed test group(s) failed." -ForegroundColor Red
    exit 1
}

Write-Host "Summary: all test groups passed." -ForegroundColor Green
exit 0
