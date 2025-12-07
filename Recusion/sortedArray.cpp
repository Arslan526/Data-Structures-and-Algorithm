#include<iostream>
using namespace std;
bool Issorted(int * arr , int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){ // it is not sorted
    return false;
    }
    else
    Issorted(arr +1 , size -1);
      return true;
}
int main(){
    int arr[6] = {2 , 4 , 6 , 8 , 9 , 12};
    int size = 6;
    int ans = Issorted(arr , size );
    if(ans ){
        cout<<"It is sorted array "<< endl;
    }
    else{
        cout<<"It is not sorted array "<<endl;
    }


    return 0;
}