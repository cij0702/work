#ifndef EXPENSE_H
#define EXPENSE_H

#include "Transaction.h"

enum ExpenseCategory { Food, Transportation, Entertainment, Necessities };

class Expense : public Transaction {
private:
    ExpenseCategory category;

public:
    Expense(double amt, const string& dt, const string& desc, ExpenseCategory cat);
    void print() const override;
};

#endif
