//
// Created by dirty on 28/04/2025.
//

#ifndef BANK_H
#define BANK_H

#include <vector>
#include <memory>
#include "Account.h"

class Bank {
private:
    std::string name;
    std::vector<std::shared_ptr<Account>> accounts;

public:
    Bank(std::string name);
    void addAccount(std::shared_ptr<Account> account);
    void displayAccounts() const;
};

#endif //BANK_H
