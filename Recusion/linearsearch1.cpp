#include<iostream>
using namespace std;

bool LinearSearch(int arr[] , int n , int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return true;
        }

    }
    return false;
    cout<< endl;

}
int main(int argc, const char** argv) {
    int arr[9] = {2 ,5 , 6 , 7 , 8 , 6 ,3 , 6 , 90 };
    int key = 90;
    int found = LinearSearch(arr , 9 , key);
  
    if(found){
        cout<<"Key is present "<< endl;
    }
    else{
        cout<<"Key is Absent "<< endl;
    }
 
    return 0;
}