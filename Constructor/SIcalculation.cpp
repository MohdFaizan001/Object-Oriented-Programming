#include<iostream>
using namespace std;

class Interest {
private:
    float principal, rate, time;

public:
    Interest(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    float calInterest() {
        return (principal * rate * time) / 100;
    }

    void display(float si) {
        cout << "Simple Interest: " << si << endl;
    }
};

int main() {
    float p, r, t;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;

    Interest s1(p, r, t);
    float si = s1.calInterest();
    s1.display(si);

    return 0;
}
