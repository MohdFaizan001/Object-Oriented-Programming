#include<iostream>
using namespace std;

class ElectricityBill {
private:
    string name;
    int units;
    float chargePerUnit;

public:
    void input() {
        cout << "Enter consumer name: ";
        cin >> name;

        cout << "Enter units consumed: ";
        cin >> units;

        cout << "Enter charge per unit: ";
        cin >> chargePerUnit;
    }

    float calBill() {
        return units * chargePerUnit;
    }

    void display(float total) {
        cout << "\nElectricity Bill Details\n";
        cout << "Consumer Name: " << name << endl;
        cout << "Total Bill Amount: " << total << endl;
    }
};

int main() {
    ElectricityBill e1;

    e1.input();
    float bill = e1.calBill();
    e1.display(bill);

    return 0;
}
