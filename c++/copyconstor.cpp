#include<iostream>
#include<string>

using namespace std;
class Student{
    string name , fname , mname;
    int rno;
    float marks;
    public:
    Student(string n , string f , string m , int r  , float ma){
        name = n;
        fname = f;
        mname = m;
        rno   = r;
        marks = ma;
    }
    Student(Student &ob){
        name = ob.name;
        fname = ob.fname;
        mname = ob.mname;
        rno = ob.rno;
        marks = ob.marks;
    }
    void display(){
        cout<<name <<"   " << fname<<"   " <<mname <<"   "<<rno <<"   "<< marks <<endl;
    }
};
int main(){
   
    Student ob("Arslan Ansari" , "Mond Dilshad", "Anisha" , 715721 , 91.3);
    ob.display();
    Student ob1(ob);
    ob1.display();
    Student ob2(ob);
    ob1.display();
     Student ob3(ob);
    ob1.display();
}