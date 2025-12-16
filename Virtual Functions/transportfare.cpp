#include <iostream>
using namespace std;

class Transport {
public:
    virtual void fare(int distance) = 0;
};

class Bus : public Transport {
public:
    void fare(int d) {
        cout << "Bus Fare: " << d * 2 << endl;
    }
};

class Train : public Transport {
public:
    void fare(int d) {
        cout << "Train Fare: " << d * 3 << endl;
    }
};

class Flight : public Transport {
public:
    void fare(int d) {
        cout << "Flight Fare: " << d * 10 << endl;
    }
};

int main() {
    Transport* t;
    int distance = 100;

    Bus b;
    Train tr;
    Flight f;

    t = &b; t->fare(distance);
    t = &tr; t->fare(distance);
    t = &f; t->fare(distance);

    return 0;
}
