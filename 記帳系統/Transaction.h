#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
protected:
    double amount;
    string date;
    string description;

public:
    Transaction(double amt, const string& dt, const string& desc);
    virtual ~Transaction() = default;
    virtual void print() const = 0;
    double getAmount() const;
};

#endif
