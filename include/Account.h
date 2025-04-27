//
// Created by dirty on 28/04/2025.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
protected:
    std::string name;
    double balance;

public:
    Account(std::string name, double balance);
    virtual ~Account();

    virtual void deposit(double amount);
    virtual bool withdraw(double amount);
    double getBalance() const;
    std::string getName() const;
};

#endif //ACCOUNT_H
