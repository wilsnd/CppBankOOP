//
// Created by dirty on 28/04/2025.
//

#include "../include/Bank.h"
#include <iostream>

Bank::Bank(std::string name) : name(name) {
}

void Bank::addAccount(std::shared_ptr<Account> account) {
    accounts.push_back(account);
}

void Bank::displayAccounts() const {
    std::cout << "Accounts at " << name << ":" << std::endl;
    for (const auto& account : accounts) {
        std::cout << account->getName() << ": $" << account->getBalance() << std::endl;
    }
}