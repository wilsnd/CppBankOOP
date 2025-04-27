//
// Created by dirty on 28/04/2025.
//

#include "../include/Account.h"
#include "../include/SavingsAccount.h"
#include "../include/Bank.h"
#include <iostream>
#include <memory>

int main() {
    // Create a bank
    Bank bank("Bank Of Roblox");

    // Make smart pointer accounts
    auto account1 = std::make_shared<Account>("John Doe", 1000);
    auto account2 = std::make_shared<SavingsAccount>("DanTDM", 2000, 0.05);

    // Add accounts to bank
    bank.addAccount(account1);
    bank.addAccount(account2);

    // Show initial state
    bank.displayAccounts();

    // Do operations
    account1->deposit(500);
    account1->withdraw(200);
    account2->deposit(1000);

    // Add interest to savings account
    std::static_pointer_cast<SavingsAccount>(account2)->addInterest();

    // Show final state
    bank.displayAccounts();

    return 0;
}