#include<iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    void input() {
        cout << "Enter distance in meters: ";
        cin >> meters;
    }

    float toKilometer() {
        return meters / 1000;
    }

    float toCentimeter() {
        return meters * 100;
    }

    float toMillimeter() {
        return meters * 1000;
    }

    void display(float x) {
        cout << x << endl;
    }
};

int main() {
    Distance d1;
    d1.input();

    cout << "Kilometers: ";
    d1.display(d1.toKilometer());

    cout << "Centimeters: ";
    d1.display(d1.toCentimeter());

    cout << "Millimeters: ";
    d1.display(d1.toMillimeter());

    return 0;
}
