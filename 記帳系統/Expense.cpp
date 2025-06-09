#include "Expense.h"
#include <iostream>
using namespace std;

Expense::Expense(double amt, const string& dt, const string& desc, ExpenseCategory cat)
    : Transaction(amt, dt, desc), category(cat) {
}

void Expense::print() const {
    string categoryName;
    switch (category) {
    case Food: categoryName = "食物"; break;
    case Transportation: categoryName = "交通"; break;
    case Entertainment: categoryName = "娛樂"; break;
    case Necessities: categoryName = "日用品"; break;
    }

    cout << "[支出] " << date << " | $" << amount << " | " << description << " | 分類: " << categoryName << endl;
}
