#include<iostream>
//#include<string>
using namespace std;

class Student{
    protected : string Sname;
                int roll_no;

    public : 
    void get(){
        cout << "Enter the name of student:" ;
        getline(cin ,Sname);

        cout << "Enter the roll no. of student:";
        cin >>roll_no;

    }
           

};


class Marks : public Student{
    private : int marks[3];
    public : 
    void get(){
        cout << " Enter the marks of 3 subjects:"<<endl;;
        for (int i = 0; i < 3; i++)
        {
           cout << "Enter the marks of subject"<<i+1<< ":";
         cin >> marks[i];
        }
        
    }
    
    int CalculateTotal(){
        int total = marks[0]+marks[1]+marks[2];
        return total;
    }

    int percentage(){
        int per = (marks[0]+marks[1]+marks[2])/3;
        return per;

    }

    void show(int t , int p){
      cout << "Student Name :"<<Sname<<endl;
      cout << "Student Roll Number :"<<roll_no<<endl;
      cout <<"Total Marks: "<< t<< endl;
      cout << "Percentage: "<<p<<"%"<<endl;
    }

};

int main(){
    Marks s1;
   //s1.get();
  //
   //s1.getMarks();
   Student :: get();
   int t = s1.CalculateTotal();
    int p =s1.percentage();
    s1.show(t,p);
    return 0;
}

