#include<iostream>
using namespace std; 
 int main() {
    int arr[10] ={19, 2, 4 ,6 , 9 ,11};
    // cout<<"Size of array " << sizeof(arr)<< endl;
    // cout<<"Addres of first momery block "<< arr << endl;
    cout<<"Addres of first momery block "<< &arr[0] << endl;
    // cout<<"The value of first block value "<< arr[0] << endl;
    // int *ptr = &arr[0];
    // cout<<"Address of pointer "<< ptr << endl;
    // cout<<" 1st "<< *ptr << endl;
    // cout<<" 2nd "<< *(ptr + 2) << endl;
    // cout<<" 3rd "<< *ptr + 1 << endl;
    // cout<<" 4th "<< *ptr++ << endl;
    // cout<<" 5th "<< *(ptr+1) << endl;
    

    // int i = 4;
    // cout<<" 5th "<< *(i + arr) << endl;
    
    int temp[20];
    cout<<"Size of interger array "<<sizeof(temp) <<" Bytes"<< endl;
    int *ptr = &temp[0];
    cout<<"size of pointer "<< sizeof(ptr) <<" Bytes"<< endl;
    cout<<"size of pointer "<< sizeof(*ptr) <<" Bytes"<< endl;

    double temp1[20];
    cout<<"Size of double array "<<sizeof(temp1)<<" Bytes" << endl;
    double *ptr1 = &temp1[0];
    cout<<"size of pointer "<< sizeof(ptr1)<<" Bytes" << endl;
    cout<<"size of pointer "<< sizeof(*ptr1) <<" Bytes" << endl;

   
//    int arr[9] = {1, 8,9,6};
//    cout<< &arr[0] <<endl;
//    int *ptr = &arr[0];
//    cout<<"Address ptr "<< &ptr << endl;
//    cout<<"values " << *ptr << endl;

//     int *ptr1 = &arr[2];
//     cout<<"Address ptr1 "<< &ptr1 << endl;
//     cout<<"Address ptr1 "<< *(&ptr1) << endl;
//     cout<<"Address ptr1 "<< &(*ptr1) << endl;
   

//    int arr[10] = {1 ,5 , 4 , 6};
//   // arr = arr + 1; // error
//    //arr[0] = arr[1] + 1;
//    cout<< arr[0]<< endl;
//    int *ptr = &arr[0];
//    cout<<"Ptr "<< ptr << endl;
//   // ptr = ptr + 1;
//    cout<<"Ptr "<< ptr << endl;

//     cout<<"Pointer is Ptr "<< *ptr << endl;
//    *ptr = *ptr + 1;
//    cout<<"Pointer is Ptr "<< *ptr << endl;
   
   

    return 0;
}