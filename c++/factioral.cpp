#include<iostream>
using namespace std;
class Factorial{
  private:
  int n, n1 , f;
  public:
  void input(){
    cout<<"Enter the number " << endl;
    cin>>n;
}
    void  calc(){
  for(int i = 1; i < n; i++){
    f = n*i;
     }  
   }
  
 void  display(){
    cout<<"Factorial is : "  << f <<endl;
}
}; 



int main(){
    Factorial f1;
    f1.input();
    f1.calc();
    f1.display();
    return 0;

}