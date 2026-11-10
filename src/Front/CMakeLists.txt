cmake_minimum_required(VERSION 3.21)
project(MicroLabFrontend LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Slint REQUIRED)

set(SOURCE_ROOT "${CMAKE_CURRENT_LIST_DIR}/..")

add_executable(microlab
    main.cpp
    "${SOURCE_ROOT}/components/core/core.c"
    "${SOURCE_ROOT}/components/memory/memory.c"
    "${SOURCE_ROOT}/components/instruction/instruction.c"
    "${SOURCE_ROOT}/components/simulator/simulator.c"
    "${SOURCE_ROOT}/components/cache/cache.c"
)

get_target_property(SLINT_COMPILER_EXECUTABLE Slint::slint-compiler IMPORTED_LOCATION)
set(SLINT_GENERATED_HEADER "${CMAKE_CURRENT_BINARY_DIR}/ui.h")
set(SLINT_GENERATED_SOURCE "${CMAKE_CURRENT_BINARY_DIR}/slint_generated_ui_1.cpp")

add_custom_command(
    OUTPUT "${SLINT_GENERATED_HEADER}" "${SLINT_GENERATED_SOURCE}"
    COMMAND "${SLINT_COMPILER_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/ui.slint"
        -f cpp
        -o "${SLINT_GENERATED_HEADER}"
        --style fluent
        --embed-resources=as-absolute-path
        --translation-domain=microlab
        "--cpp-file=${SLINT_GENERATED_SOURCE}"
    DEPENDS ui.slint "${SLINT_COMPILER_EXECUTABLE}"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
    VERBATIM
)

target_sources(microlab PRIVATE "${SLINT_GENERATED_HEADER}" "${SLINT_GENERATED_SOURCE}")
target_include_directories(microlab PRIVATE "${SOURCE_ROOT}" "${CMAKE_CURRENT_BINARY_DIR}")
target_link_libraries(microlab PRIVATE Slint::Slint)

add_custom_command(TARGET microlab POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "$<TARGET_FILE:slint_cpp-shared>"
        "$<TARGET_FILE_DIR:microlab>"
    VERBATIM
)