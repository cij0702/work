#include "AccountBook.h"
#include "Income.h"
#include "Expense.h"
#include <iostream>
using namespace std;

AccountBook::~AccountBook() {
    for (Transaction* t : records)
        delete t;
}

void AccountBook::addRecord(Transaction* t) {
    records.push_back(t);

    if (auto income = dynamic_cast<Income*>(t)) {
        balance += income->getAmount();
    }
    else if (auto expense = dynamic_cast<Expense*>(t)) {
        balance -= expense->getAmount();
    }
}

void AccountBook::showAll() const {
    for (Transaction* t : records)
        t->print();
}

double AccountBook::getBalance() const {
    return balance;
}
