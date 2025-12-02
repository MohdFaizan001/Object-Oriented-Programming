#include<iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) {  
        length = l;
        width = w;
    }

    Rectangle(int l) {        
        length = l;
        width = l;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    Rectangle r2(6);

    cout << "Rectangle:\n";
    r1.display();

    cout << "\nSquare:\n";
    r2.display();

    return 0;
}
