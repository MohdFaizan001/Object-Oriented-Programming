#include<iostream>
using namespace std;

class Interest {
private:
    float principal, rate, time;

public:
    void input() {
        cout << "Enter principal, rate and time: ";
        cin >> principal >> rate >> time;
    }

    float calInterest() {
        return (principal * rate * time) / 100;
    }

    void display(float si) {
        cout << "Simple Interest: " << si << endl;
    }
};

int main() {
    Interest s1;
    s1.input();
    float si = s1.calInterest();
    s1.display(si);
    return 0;
}

