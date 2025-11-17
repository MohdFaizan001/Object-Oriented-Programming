#include<iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    void input() {
        cout << "Enter length, width and height: ";
        cin >> length >> width >> height;
    }

    int calVolume() {
        return length * width * height;
    }

    void display(int v) {
        cout << "Volume: " << v << endl;
    }
};

int main() {
    Box b1;
    b1.input();
    int vol = b1.calVolume();
    b1.display(vol);
    return 0;
}
