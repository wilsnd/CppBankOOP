//
// Created by dirty on 28/04/2025.
//
#include <iostream>

void runAccountTests();
void runSavingsTests();

int main() {
    std::cout << "Running tests..." << std::endl;

    runAccountTests();
    runSavingsTests();

    std::cout << "All tests passed!" << std::endl;
    return 0;
}