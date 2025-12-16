#include<iostream>
using namespace std;

class shape{
    protected: int a , b;
    public: 
    virtual void input()=0;
    virtual float Area()=0;
    
};

class circle:public shape{
    public :
      void input(){
        cout << "Enter the radius of circle.";
        cin >>a;
      }

      float Area(){
        cout <<"area = "<<3.14*a*a<< endl;
      }
};


class rectangle:public shape{
    public :
      void input(){
        cout << "Enter the length and breadth of rectangle.";
        cin >>a>>b;
      }

      float Area(){
        cout <<"area = "<<a*b<< endl;
      }
};

class square:public shape{
    public :
      void input(){
        cout << "enter the side of square.";
        cin >>a;
      }

      float Area(){
        cout <<"area = "<<a*a<< endl;
      }
};



int main(){
    shape *ptr ;

    cout<<"Shape area system."<<endl;
    cout <<"Enter the shape."<<endl;
    cout <<"1.CIRCLE"<<endl;
    cout <<"2.RECTANGLE."<<endl;
    cout <<"3.SQUARE."<<endl;
    int choice;
    cout <<"Enter the choice from above menu."<<endl;
    cin >>choice;
    switch (choice)
    {
    case 1:
       circle c1;
       ptr=&c1;
       ptr->input();
       ptr->Area();

       break;

    case 2:
       rectangle r1;
       ptr=&r1;
       ptr->input();
       ptr->Area();

       break;

       
    case 3:
   
        square s1;
        ptr=&s1;
        ptr->input();
        ptr->Area();

        break;
    
    default:
    cout << "Invalid choice.";
        break;
    }
   
    

    return 0;
}