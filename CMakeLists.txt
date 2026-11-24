cmake_minimum_required(VERSION 3.14)
project(SimpleCIProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app src/main.cpp src/m_utils.cpp)

enable_testing()

add_executable(unit_tests tests/tests.cpp src/m_utils.cpp)
add_test(NAME MathUnitTests COMMAND unit_tests)
