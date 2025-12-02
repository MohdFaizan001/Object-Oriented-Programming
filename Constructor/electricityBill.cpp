#include<iostream>
using namespace std;

class Bill {
private:
    int units;
    float chargePerUnit;

public:
    Bill(int u) {
        units = u;
        chargePerUnit = 5;
    }

    Bill(Bill &b) {
        units = b.units;
        chargePerUnit = b.chargePerUnit;
    }

    float total() {
        return units * chargePerUnit;
    }

    void display(float amt) {
        cout << "Units: " << units << endl;
        cout << "Total Bill: " << amt << endl;
    }
};

int main() {
    int u;
    cout << "Enter units: ";
    cin >> u;

    Bill b1(u);
    Bill b2(b1);

    float t1 = b1.total();
    float t2 = b2.total();

    cout << "\nOriginal Bill:\n";
    b1.display(t1);

    cout << "\nCopied Bill:\n";
    b2.display(t2);

    return 0;
}
