#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int age;
    int roll;
    string fathername;
    string mothername;
    string DOB;
    string add;
    public:

    string getname(){
        return this-> name;
    }
    int setname(string name){
        this -> name  = name;
    }
    int getroll(){
        return this-> roll;
    }
    int setroll(int roll){
        this-> roll = roll;
    }

     int getage(){
        return this-> age;
    }
    int setage(int age){
        this -> age  = age;
    }
    string getfathername(){
        return this-> fathername;
    }
    int setfathername(string fathername){
        this -> fathername  = fathername;
    }
    string getmothername(){
        return this-> mothername;
    }
    int setmothername(string mothername){
        this -> mothername  = mothername;
    }
    string getadd(){
        return this-> add;
    }
    int setadd(string add){
        this -> add  = add;
    }
    string getdob(){
        return this-> DOB;
    }
    int setdob(string DOB){
        this -> DOB  = DOB;
    }
   
};
int main(int argc, const char** argv) {
    Student obj;
    obj.setname("Arslan");
    obj.setage(21);
    obj.setroll(4556);
    obj.setfathername("Mod:Dilshad");
    obj.setmothername("Anisha");
    obj.setadd("Akbarpur chuangawa");
    obj.setdob("15-04-2003");
     
    cout<<"Student name : " << obj.getname()<< endl;
    cout<<"Student Age : " << obj.getage()<< endl;
    cout<<"Student Roll : " << obj.getroll()<< endl;
    cout<<"Student Fathere name  : " << obj.getfathername()<< endl;
    cout<<"Student Mother name : " << obj.getmothername()<< endl;
    cout<<"Student add : " << obj.getadd()<< endl; 
    cout<<"Student DOB : " << obj.getdob()<< endl;
    

    return 0;
}