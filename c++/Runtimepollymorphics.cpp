#include <iostream>
using namespace std;
class Baseclass{
  public:
  int base_var ;
    void display(){
    cout<<"Displying base class varible : " << base_var << endl;
  }
};
class Derivedclass : public Baseclass{
     public:
  int derived_var;
  void display(){
    cout<<"Dispyling base class varible : " << base_var << endl;
    cout<<"Dispyling base class varible : " << derived_var << endl;
  }
};
int main(){
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
   base_class_pointer->base_var = 90 ;
   base_class_pointer->display();
   cout<<"NEXTNEXTNEXTNEXTNEXTNEXTNEXT:"<<endl;
   Derivedclass *derived_class_pointer;
   derived_class_pointer = &obj_derived;
   derived_class_pointer->derived_var = 9009 ;
    
    derived_class_pointer->display();
    return 0;
}