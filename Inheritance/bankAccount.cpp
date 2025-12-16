#include <iostream>
using namespace std;

class Account {
protected:
    float balance;
public:
    Account() {
        balance = 0;
    }
};

class SavingsAccount : public Account {
public:
    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }

    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    SavingsAccount s;
    s.deposit(5000);
    s.withdraw(2000);
    s.showBalance();
    return 0;
}
