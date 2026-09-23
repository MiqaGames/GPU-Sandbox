$ErrorActionPreference = "Stop"

$projectRoot = Split-Path -Parent $PSScriptRoot
$imageName = "school-project-tests"

Write-Host "Building Docker image..." -ForegroundColor Cyan
& docker build -f "$projectRoot\docker\Dockerfile.tests" -t $imageName $projectRoot
if ($LASTEXITCODE -ne 0) {
    throw "Docker build failed."
}

Write-Host "Running tests in isolated Docker container..." -ForegroundColor Cyan
& docker run --rm $imageName
if ($LASTEXITCODE -ne 0) {
    throw "Docker test run failed."
}

Write-Host "All tests passed inside Docker." -ForegroundColor Green
