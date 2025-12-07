#include<iostream>
#include<string>
using namespace std;
class Human{
    int heigth , w , age;
    public:
    void Setdata(int h , int w1, int a){
    heigth = h;
    w = w1;
    age = a;

   }
   void Display(){
    cout<<"Human Height : "<< heigth << endl;
    cout<<"Himan Weigth : "<< w << endl;
    cout<<"Human age : "<< age << endl;
   }
};
class Male : public Human {
    string name;
    public:
    void Sleeping(){
        cout<<"Male is sleeping"<< endl;
    }
};

int main(int argc, const char** argv) {
    Male object;
    object.Setdata(7 , 89 , 44);
    object.Sleeping();
    object.Display();
    return 0;
}