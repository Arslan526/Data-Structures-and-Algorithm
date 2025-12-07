#include<iostream>
using namespace std;
void update(int arr[] , int n ){
    cout<<"Inside the funtion "<< endl;
    // updayting array is first element 
    
    for(int i = 0 ; i< n; i++){
        cout<< arr[i] <<" ";
    }
    arr[3] = 910;
    cout<< endl;
    cout<<"Going back to main function "<<endl;
}
int main() {
    int arr[5] = {2 ,4 , 6 , 7 , 8};
    update(arr , 5);
    cout<<"Printing in main Function" << endl;
    for(int i = 0 ; i < 5; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
    update(arr , 5);
    return 0;
}