# Docker

Перед запуском установите Docker Desktop и убедитесь, что Docker Engine запущен. Все команды ниже выполняются из корня проекта.

## Запуск приложения

Чтобы собрать образ и запустить приложение в одноразовом контейнере:

```powershell
docker compose -f docker/docker-compose.yml run --build --rm app
```

Контейнер удалится после завершения программы. Собранный образ останется локально.

Альтернативный запуск через Compose:

```powershell
docker compose -f docker/docker-compose.yml up --build
```

После завершения приложения остановите и удалите ресурсы Compose:

```powershell
docker compose -f docker/docker-compose.yml down
```

## Запуск тестов

В PowerShell из корня проекта запустите полный набор тестов в изолированном контейнере:

```powershell
powershell -ExecutionPolicy Bypass -File .\docker\run-tests.ps1
```

Скрипт собирает образ из `docker/Dockerfile.tests`, запускает unit-тесты и возвращает ошибку, если какой-либо тест не прошёл.

Те же действия можно выполнить вручную:

```powershell
docker build -f docker/Dockerfile.tests -t school-project-tests .
docker run --rm school-project-tests
```

## Базовый образ

Сборка использует лёгкий `alpine:3.22`. Компилятор устанавливается только во временный build-stage; итоговый образ приложения содержит только исполняемый файл. При первой сборке Docker должен скачать Alpine из Docker Hub, поэтому требуется доступ к Docker Hub.