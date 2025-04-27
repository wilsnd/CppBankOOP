//
// Created by dirty on 28/04/2025.
//

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(std::string name, double balance, double rate);
    bool withdraw(double amount) override;
    void addInterest();
};

#endif //SAVINGSACCOUNT_H
