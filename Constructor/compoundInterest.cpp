#include<iostream>
#include<cmath>
using namespace std;

class CompoundInterest {
private:
    float p, r, t;
    int n;

public:
    CompoundInterest(float pr, float ra, float ti, int nn = 1) {
        p = pr;
        r = ra;
        t = ti;
        n = nn;
    }

    float calculate() {
        return p * pow((1 + r / n), n * t);
    }

    void display(float amount) {
        cout << "Final Amount: " << amount << endl;
        cout << "Compound Interest: " << amount - p << endl;
    }
};

int main() {
    float p, r, t;
    int n;

    cout << "Enter principal, rate, time, n: ";
    cin >> p >> r >> t >> n;

    CompoundInterest c1(p, r, t, n);

    float amt = c1.calculate();
    c1.display(amt);

    return 0;
}
