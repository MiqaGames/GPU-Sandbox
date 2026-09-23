# Тесты проекта

В этой папке находятся отдельные юнит тесты по логическим частям проекта. Каждый файл проверяет одну часть системы и запускается отдельно, чтобы состояние одного сценария не влияло на другой.

## Краткая сводка по файлам

### test_core.c
Проверяет сброс состояния ядра. Утверждает, что **core_reset()** очищает регистры, сбрасывает **pc** в 0 и переводит **current_state** в **NORMAL**.

### test_memory.c
Проверяет базовую работу памяти: запись, чтение, чтение за пределами допустимых адресов и сброс памяти.

### test_instruction.c
Проверяет валидаторы и основные инструкции процессора: **LOAD**, **STORE**, арифметику, сравнение, **HALT**, переходы и условный переход **JIF**.

### test_simulator.c
Проверяет цикл выполнения программы: корректную остановку на **HALT** и переход в **TIMEOUT** при превышении лимита циклов.

### test_debug.c
Проверяет корректность отладочного вывода. Функции печати должны работать без изменения состояния **Core**.

## Как пользоваться

### Быстрый запуск всех тестов сразу

Запустите PowerShell скрипт из корня проекта:

   powershell -ExecutionPolicy Bypass -File .\tests\run_all_tests.ps1

Скрипт сам:
- собирает каждый тест отдельно
- запускает их в изначальной последовательности
- показывает, какой набор прошёл, а какой упал

### Ручной запуск по одному

1. Откройте терминал в корне проекта.
2. Скомпилируйте нужный тест:

   gcc -std=c11 -I src tests/test_core.c src/components/core/core.c -o tests/test_core.exe
   gcc -std=c11 -I src tests/test_memory.c src/components/memory/memory.c -o tests/test_memory.exe
   gcc -std=c11 -I src tests/test_instruction.c src/components/core/core.c src/components/memory/memory.c src/components/instruction/instruction.c -o tests/test_instruction.exe
   gcc -std=c11 -I src tests/test_simulator.c src/components/core/core.c src/components/memory/memory.c src/components/instruction/instruction.c src/components/simulator/simulator.c -o tests/test_simulator.exe
   gcc -std=c11 -I src tests/test_debug.c src/components/core/core.c src/components/memory/memory.c src/components/instruction/instruction.c src/components/debug/debug.c -o tests/test_debug.exe

3. Запустите исполняемый файл:

   ./tests/test_core.exe
   ./tests/test_memory.exe
   ./tests/test_instruction.exe
   ./tests/test_simulator.exe
   ./tests/test_debug.exe

4. Если программа завершилась без ошибок — тест прошёл.

## Docker: запуск в изолированной среде

  Чтобы прогнать тесты в чистом контейнере без локальной сборки, используйте PowerShell скрипт:

   powershell -ExecutionPolicy Bypass -File .\docker\run-tests.ps1

Скрипт сам:
- собирает образ на основе GCC 13
- копирует проект внутрь контейнера
- собирает все тесты
- запускает их последовательно в изолированной среде

Ручная команда Docker:

   docker build -f .\docker\Dockerfile.tests -t school-project-tests .
   docker run --rm school-project-tests

## Общая заметка

Тесты намеренно запускаются отдельно, потому что проект использует состояние **Core** и глобальные переменные (**max_cycles**, **cycles**), и после ошибочной проверки состояние может перейти в **ERROR** или **TIMEOUT**. Поэтому сценарии должны быть независимыми.


