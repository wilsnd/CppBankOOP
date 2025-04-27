//
// Created by dirty on 28/04/2025.
//

#include "../include/Account.h"
#include <cassert>
#include <iostream>

void testAccountDeposit() {
    Account account("Test User", 100);
    account.deposit(50);
    assert(account.getBalance() == 150);
    std::cout << "Account deposit test passed!" << std::endl;
}

void testAccountWithdraw() {
    Account account("Test User", 100);
    bool result1 = account.withdraw(50);
    assert(result1 == true);
    assert(account.getBalance() == 50);

    bool result2 = account.withdraw(100);
    assert(result2 == false);
    assert(account.getBalance() == 50);

    std::cout << "Account withdraw test passed!" << std::endl;
}

void runAccountTests() {
    testAccountDeposit();
    testAccountWithdraw();
}