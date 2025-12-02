#include<iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature(float c) {
        celsius = c;
    }

    float toFahrenheit() {
        return (celsius * 9/5) + 32;
    }

    void display() {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << toFahrenheit() << endl;
    }
};

int main() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    Temperature t1(c);
    t1.display();

    return 0;
}
