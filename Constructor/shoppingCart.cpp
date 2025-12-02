#include<iostream>
using namespace std;

class Item {
private:
    float *price;
    int *quantity;

public:
    Item(float p, int q) {
        price = new float;
        quantity = new int;

        *price = p;
        *quantity = q;
    }

    float totalCost() {
        return (*price) * (*quantity);
    }

    void display(float total) {
        cout << "Price: " << *price << endl;
        cout << "Quantity: " << *quantity << endl;
        cout << "Total Cost: " << total << endl;
    }

    ~Item() {
        delete price;
        delete quantity;
        cout << "\nMemory Freed Successfully.\n";
    }
};

int main() {
    float p;
    int q;

    cout << "Enter price and quantity: ";
    cin >> p >> q;

    Item i1(p, q);
    float total = i1.totalCost();
    i1.display(total);

    return 0;
}
