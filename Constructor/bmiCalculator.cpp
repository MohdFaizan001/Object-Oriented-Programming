#include<iostream>
using namespace std;

class BMI {
private:
    float weight, height;

public:
    BMI(float w, float h) {
        weight = w;
        height = h;
    }

    float calBMI() {
        return weight / (height * height);
    }

    void display(float bmi) {
        cout << "BMI: " << bmi << endl;

        if (bmi < 18.5) cout << "Category: Underweight\n";
        else if (bmi < 24.9) cout << "Category: Normal\n";
        else if (bmi < 29.9) cout << "Category: Overweight\n";
        else cout << "Category: Obese\n";
    }
};

int main() {
    float w, h;
    cout << "Enter weight (kg) and height (m): ";
    cin >> w >> h;

    BMI b1(w, h);
    float val = b1.calBMI();
    b1.display(val);

    return 0;
}
