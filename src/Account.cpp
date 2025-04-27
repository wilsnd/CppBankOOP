//
// Created by dirty on 28/04/2025.
//

#include "../include/Account.h"
#include <iostream>

Account::Account(std::string name, double balance)
    : name(name), balance(balance) {
}

Account::~Account() {
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getName() const {
    return name;
}