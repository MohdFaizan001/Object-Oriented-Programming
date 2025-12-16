#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float x, float y) { l = x; b = y; }
    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape {
    float b, h;
public:
    Triangle(float x, float y) { b = x; h = y; }
    void area() {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    c.area();
    r.area();
    t.area();

    return 0;
}
