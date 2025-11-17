#include<iostream>
using namespace std;

class Temperature {
private:
    float temp;

public:
    void input() {
        cout << "Enter temperature value: ";
        cin >> temp;
    }

    float cToF() {
        return (temp * 9/5) + 32;
    }

    float fToC() {
        return (temp - 32) * 5/9;
    }

    void display(float x) {
        cout << x << endl;
    }
};

int main() {
    Temperature t1;

    t1.input();
    cout << "Celsius to Fahrenheit: ";
    t1.display(t1.cToF());

    cout << "Fahrenheit to Celsius: ";
    t1.display(t1.fToC());

    return 0;
}
