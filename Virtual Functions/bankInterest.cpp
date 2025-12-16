#include <iostream>
using namespace std;

class BankAccount {
protected:
    float amount;
public:
    BankAccount(float a) {
        amount = a;
    }
    virtual void interest() = 0;
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(float a) : BankAccount(a) {}
    void interest() {
        cout << "Savings Interest: " << amount * 0.04 << endl;
    }
};

class FixedDeposit : public BankAccount {
public:
    FixedDeposit(float a) : BankAccount(a) {}
    void interest() {
        cout << "Fixed Deposit Interest: " << amount * 0.07 << endl;
    }
};

class RecurringDeposit : public BankAccount {
public:
    RecurringDeposit(float a) : BankAccount(a) {}
    void interest() {
        cout << "Recurring Deposit Interest: " << amount * 0.05 << endl;
    }
};

int main() {
    BankAccount* acc;

    SavingsAccount s(10000);
    FixedDeposit f(10000);
    RecurringDeposit r(10000);

    acc = &s; acc->interest();
    acc = &f; acc->interest();
    acc = &r; acc->interest();

    return 0;
}
