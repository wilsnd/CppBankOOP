//
// Created by dirty on 28/04/2025.
//

#include "../include/SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(std::string name, double balance, double rate)
    : Account(name, balance), interestRate(rate) {
}

bool SavingsAccount::withdraw(double amount) {
    // Enforce minimum balance of 100
    if (balance - amount < 100) {
        return false;
    }
    return Account::withdraw(amount);
}

void SavingsAccount::addInterest() {
    double interest = balance * interestRate;
    deposit(interest);
}