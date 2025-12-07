#include<iostream>
using namespace std;
 bool uniqueNumber(int arr[] , int size ){
    for(int i = 0; i<size; i++){
       if(arr[i] == size){
        return 1;
       }
    }
    return 0;
}
int main(){
    int uniqe[8] = {2, 3 ,3 ,5 , 2 ,5 , 7 , 3 };
    /* 3 -> 3
       2 -> 2   
       5 -> 2   Becuse  2 and 5 twice so Not a unique number 
       
    */
    bool found = uniqueNumber(uniqe , 8 );
    if(found){
        cout<<"Unique number "<< endl;
    }
    else {
        cout<<"Not a unique number "<< endl;
    }
}