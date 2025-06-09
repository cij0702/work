#include "Expense.h"
#include <iostream>
using namespace std;

Expense::Expense(double amt, const string& dt, const string& desc, ExpenseCategory cat)
    : Transaction(amt, dt, desc), category(cat) {
}

void Expense::print() const {
    string categoryName;
    switch (category) {
    case Food: categoryName = "����"; break;
    case Transportation: categoryName = "��q"; break;
    case Entertainment: categoryName = "�T��"; break;
    case Necessities: categoryName = "��Ϋ~"; break;
    }

    cout << "[��X] " << date << " | $" << amount << " | " << description << " | ����: " << categoryName << endl;
}
