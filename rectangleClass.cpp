#include<iostream>
using namespace std;

class rectangle {
    private : int length , breadth;
    public : 

    void input(){
        cout << "Enter the value of length and breadth:";
        cin >> length>> breadth;
    }
    
    int calArea(){
        return length*breadth;
    }

    int calPerimeter(){
        return 2*(length + breadth);
    }

    void display(int area){
       cout << area << endl;
    }
    

};


int main(){
    rectangle s1;
    s1.input();
    int area = s1.calArea();
    int perimeter = s1.calPerimeter();
    cout << " Area : ";
    s1.display(area);
    cout << "Perimeter : ";
    s1.display(perimeter);

    return 0;
}