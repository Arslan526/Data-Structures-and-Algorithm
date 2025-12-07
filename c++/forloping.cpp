#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2 , 5 , 6 , -4 ,8 , -3 , -6 , 78 };
    for(int i = 0; i<8;i++){
        cout<<"tu mera si dosti kar li"<<endl;
        for( int j = i+1;j<8;j++){
            cout<<"ChL MAI NAHI KR HU "<< endl;
           for(int k =j+1; k<8;k++){
            cout<<endl<<"Tu  FRINEN D BANJA " <<endl;
             cout<<arr[i]<<" "<<arr[j] <<" "<< endl<<arr[k] <<" ";
           }
        }
        
    }
    cout<<"MAI NAHI KAR HUI TU apna kam kar "<< endl;
   
}