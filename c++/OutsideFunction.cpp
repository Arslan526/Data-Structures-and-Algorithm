#include<iostream>
using namespace std;
class Student {
    int id;
    float m1 ,p1 , c1;
    public:
    void readmarks();
    void displaymarks();
};
void Student ::  readmarks(){
    cout<<" Enter the id , math , phy and chemistry marks : ";
    cin>> id >> m1 >> p1 >> c1;
}
void Student ::  displaymarks(){
    cout<<" Student id : "<< id << endl;
    cout<<" Student marks : "<< m1 <<" "<< p1 <<" " << c1 << endl;
    cout<<" Total marks : "<< (m1 + p1 + c1 ) << endl;
    cout<<" Percentage : "<< (m1 + p1 + c1 )/3 << endl;
}
int main(){
    Student ob;
    ob.readmarks();
    ob.displaymarks();
}