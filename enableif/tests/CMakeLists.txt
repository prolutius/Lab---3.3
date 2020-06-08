set(SOURCES
    tests.cpp
)

# создаем исполняемый файл (с названием)
add_executable(enable_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(enable_test PUBLIC enable_lib)
target_link_libraries(enable_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/simple_test
set_property(TARGET enable_test PROPERTY FOLDER "tests/enable_test")