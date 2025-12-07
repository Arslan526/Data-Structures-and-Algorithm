#include<iostream>
using namespace std;
class Animal{
    string color;
    public:
    void eating(){
        cout<<"Eating "<< endl;
    }
};
class Dog : public Animal{
     public:
     void Brak(){
        cout<<"Barking "<< endl;
     }
};
int main(int argc, const char** argv) {
    Dog obj;
    obj.eating();
    obj.Brak();
    return 0;
}