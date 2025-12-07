#include<iostream>
using namespace std;
 int main(int argc, const char** argv) {
      int n ;
      cout<<"Enter a number : ";
      cin>>n;
      int i = 1;
      int sum = 0;
      while(i <=n){
        if(i % 2 == 0)
       sum =  sum + i;
      i++;
      }
      cout<<"Sum of all even number : "<< 1 << " To "<< n <<" = " << sum << endl;
    return 0;
}