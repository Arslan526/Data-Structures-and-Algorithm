#include<iostream>
using namespace std;
void Print(int arr[] , int n ){
    for(int i = 0; i <n; i++){
        cout<<arr[i] <<" ";
    }cout<<endl;
}
void Reverse(int num[] , int n ){
    int s = 0; 
    int e = n - 1;
    while (s <= e)
    {
        swap(num[s ] , num[e]);
        s++;
        e--;
    }
}
int main(int argc, const char** argv) {
    int odd[9]  {2 ,5 ,6 ,7 ,-1 , 15 , 7 , 6 ,3 };
    int even[8] = {4 ,53 ,3 , 5 , 6 ,0 , 3 , 9};
    cout<<"Revrese an Array odd"<< endl;
    Reverse(odd , 9);
    Print(odd , 8);
    cout<< endl;
    cout<<"Revrese an Array even "<< endl;
    Reverse(even , 7);
    Print(even , 7);
    cout<< endl;
    return 0;
}