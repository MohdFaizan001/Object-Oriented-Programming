#include<iostream>
using namespace std;

class Speed {
private:
    float distance, time;

public:
    Speed(float d, float t) {
        distance = d;
        time = t;
    }

    float calSpeed() {
        return distance / time;
    }

    void display(float s) {
        cout << "Speed: " << s << " km/hr" << endl;
    }
};

int main() {
    float d, t;
    cout << "Enter distance (km) and time (hr): ";
    cin >> d >> t;

    Speed s1(d, t);
    float sp = s1.calSpeed();
    s1.display(sp);

    return 0;
}
