#include<iostream>
using namespace std;
class  Animal{
    public:
    void Eating(){
        cout<<"Eating "<< endl;
    }
};
class Dog : public Animal{
    public:
    void Bark(){
        cout<<"Barking "<< endl;

    }
};
class cat : public Animal{
    public:
    void meow(){
        cout<<"Meowing "<< endl;
    }
};
 int main(int argc, const char** argv) {
    cat ob;
    ob. Eating();
    ob.meow();

    return 0;
}