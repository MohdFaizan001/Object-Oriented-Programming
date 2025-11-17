#include<iostream>
using namespace std;

class circle {
    private : float radius;
    public : 
     void input(){
        cout << "Enter the radius of circle : ";
        cin >> radius ;
     }

     float calArea(){
        return 3.14*radius*radius;
     }

     float calPerimeter(){
        return 6.28*radius;
     }

     void display(float input){
        cout << input << endl;
        
     }

};

int main(){
    circle c1;
    c1.input();
    float area = c1.calArea();
    float perimeter = c1.calPerimeter();
    cout << "Area : ";
    c1.display(area);
    cout << "Parameter : ";
    c1.display(perimeter);

    return 0;
}