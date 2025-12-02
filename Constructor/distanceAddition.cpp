#include<iostream>
using namespace std;

class Distance {
private:
    int meters, cm;

public:
    Distance(int m) {
        meters = m;
        cm = 0;
    }

    Distance(int m, int c) {
        meters = m;
        cm = c;
    }

    Distance add(Distance d) {
        Distance temp(0, 0);
        temp.meters = meters + d.meters;
        temp.cm = cm + d.cm;

        if (temp.cm >= 100) {
            temp.meters += temp.cm / 100;
            temp.cm = temp.cm % 100;
        }
        return temp;
    }

    void display() {
        cout << meters << " meters " << cm << " cm" << endl;
    }
};

int main() {
    Distance d1(5, 80);
    Distance d2(3, 40);

    Distance d3 = d1.add(d2);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
