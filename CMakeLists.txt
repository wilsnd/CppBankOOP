cmake_minimum_required(VERSION 3.29)
project(Bank2)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_library(bank_lib
        src/Account.cpp
        src/SavingsAccount.cpp
        src/Bank.cpp
)

add_executable(bank_app src/main.cpp)
target_link_libraries(bank_app bank_lib)

add_executable(bank_tests
        test/AccountTest.cpp
        test/SavingsTest.cpp
        test/test_main.cpp
)
target_link_libraries(bank_tests bank_lib)

enable_testing()
add_test(NAME BankTests COMMAND bank_tests)