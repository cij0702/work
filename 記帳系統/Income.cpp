#include "Income.h"
#include <iostream>
using namespace std;

Income::Income(double amt, const string& dt, const string& desc, const string& src)
    : Transaction(amt, dt, desc), source(src) {
}

void Income::print() const {
    cout << "[¦¬¤J] " << date << " | $" << amount << " | " << description << " | ¨Ó·½: " << source << endl;
}
