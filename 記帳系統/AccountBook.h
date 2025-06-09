#ifndef ACCOUNTBOOK_H
#define ACCOUNTBOOK_H

#include <vector>
#include "Transaction.h"

class AccountBook {
private:
    std::vector<Transaction*> records;
    double balance = 0;

public:
    ~AccountBook();
    void addRecord(Transaction* t);
    void showAll() const;
    double getBalance() const;
};

#endif
