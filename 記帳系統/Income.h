#ifndef INCOME_H
#define INCOME_H

#include "Transaction.h"

class Income : public Transaction {
private:
    string source;

public:
    Income(double amt, const string& dt, const string& desc, const string& src);
    void print() const override;
};

#endif
