#include<iostream>
using namespace std;

class Average {
private:
    int a, b, c;

public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }

    float calAverage() {
        return (a + b + c) / 3.0;
    }

    void display(float avg) {
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Average s1;
    s1.input();
    float avg = s1.calAverage();
    s1.display(avg);
    return 0;
}
