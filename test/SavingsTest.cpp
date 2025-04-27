//
// Created by dirty on 28/04/2025.
//

#include "../include/SavingsAccount.h"
#include <cassert>
#include <iostream>

void testSavingsAccountWithdraw() {
    SavingsAccount account("Test User", 200, 0.05);

    // Should fail
    bool result1 = account.withdraw(150);
    assert(result1 == false);
    assert(account.getBalance() == 200);

    // Should succeed
    bool result2 = account.withdraw(50);
    assert(result2 == true);
    assert(account.getBalance() == 150);

    std::cout << "SavingsAccount withdraw test passed!" << std::endl;
}

void testSavingsAccountInterest() {
    SavingsAccount account("Test User", 1000, 0.1);
    account.addInterest();
    assert(account.getBalance() == 1100); // 1000 + (1000 * 0.1)

    std::cout << "SavingsAccount interest test passed!" << std::endl;
}

void runSavingsTests() {
    testSavingsAccountWithdraw();
    testSavingsAccountInterest();
}
