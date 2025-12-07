#include<iostream>
#include <string>
using namespace std;
class Student {
    int roll;
    string name;
    public:
    Student (int ro , string na){
        roll = ro;
        name = na;
    }
    Student(Student &ob){
        roll = ob.roll;
        name = ob.name;
    }
    void display(){
        cout<< " Student roll number : "<< roll <<"   " << " Name : "<<name << endl;
    }
};
  int main(){
    int roll_nu;
    string name1 ;
    cout<<"Enter the student roll number : ";
    cin>>roll_nu;
    cout<<"Enter the student name : ";
    cin>>name1;
    Student obj(roll_nu , name1 );
    obj.display();
    Student obj1(obj);
    obj1.display();
    return 0;
  }