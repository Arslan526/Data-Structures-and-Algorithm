#include<iostream>
using namespace  std;
void update1(int &n){
    n++;
    cout<<"Function n ki vlues "<< n << endl;
}
void update(int n){
    n++;
    cout<<"Function n ki vlues "<< n << endl;
}
int getsum(int arr[] , int n){
  int sum = 0;
  for(int i =0; i < n; i++){
    sum += arr[i];
  }
  return sum;
}
int main(){
    /*int i = 90;
    cout<<"Before i "<< i << endl;
    update1(i);
    cout<<"After i "<< i << endl;
   

    int i =9;
    cout<<"Before i "<< i << endl;
    i++;
    cout<< i << endl;
    // ceeate refernce varible
    int &j = i;
    cout<< "After i "<< i << endl;
    i--;
    cout<< i <<endl;
    cout<< j << endl;
    */

  //  Array
    int n;
   cout<<"size of Array"<< endl;
   cin>> n;
   // varible size of array
   int * arr = new int[n];
   cout<<"Enter a number "<< endl;
   for(int i = 0; i < n; i++){
    cin>> arr[i];
   }
   int ans = getsum(arr , n);
   cout<<"Sum of Array "<< ans << endl;




    return 0;
}