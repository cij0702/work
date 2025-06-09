#include "Transaction.h"

Transaction::Transaction(double amt, const string& dt, const string& desc)
    : amount(amt), date(dt), description(desc) {
}

double Transaction::getAmount() const {
    return amount;
}
