
#include <iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int roll;
    public:
    void setdata(string nam , int rollno){
        name = nam;
        roll = rollno;
    }
    void Getdata(){
        cout<<"Student name "<< name << endl;
        cout<<"Student roll "<< roll <<endl;
    }
    
};
class Exam : public Student {
    public:
    float phy , che , math;
    void SetMarks(float p , float c , float m){
        phy = p;
        che  = c;
        math = m;
    }
    void Getmarks(){
        cout<<"Obtained marks "<<endl;
        cout<<"Physics " << phy << endl;
        cout<<"Chemistry "<< che << endl;
        cout<<"MAths "<< math << endl;
    }
};
class Result : public Exam {
    float per;
    public:
    void Display(){
        per = phy + che + phy;
        float total =  per /3;
        cout<<"Persectang "<< total << endl;
    }
};
int main() {
   Result ob;
   ob.setdata("arslan" , 34);
   ob.Getdata();
   ob.SetMarks(90.9, 98 , 89);
   ob.Getmarks();
   ob.Display();
    
    return 0;
}