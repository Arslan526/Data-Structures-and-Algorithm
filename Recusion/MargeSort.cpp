9#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i = 0 ; i< n ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}


void Marge(int * arr , int s , int e){
    int mid = (s+e)/ 2;
    int len1 = mid -s + 1;
    int len2 = e - mid;
    int * firstArray = new int[len1];
    int * secondArray = new int[len2];
    // copy values 
    int mainArrayindex = s;

    for(int i =0; i < len1; i++){
        firstArray[i] = arr[mainArrayindex++]; 

    }
    mainArrayindex  = mid + 1;
     
    for(int i =0; i < len2; i++){
        secondArray[i] = arr[mainArrayindex++]; 

    }


    // Marge 2 sotr array
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;
    while(index1 < len1 && index2 < len2){
        if(firstArray[index1] < secondArray[index2]){
            arr[mainArrayindex++] = firstArray[index1++];
        }
        else{
             arr[mainArrayindex++] = secondArray[index2++];
        }
    }

    while(index1 < len1){
         arr[mainArrayindex++] = firstArray[index1++];
    }
    while(index2 < len2){
         arr[mainArrayindex++] = secondArray[index2++];
    }

  

}


void MargeSort(int * arr , int s , int e){
    if(s >= e){
        return;
    }
    int mid = (s + e) /2;
    // Left part sort karna h
    MargeSort(arr , s , mid );
    // Rigth part sort karna h
    MargeSort(arr  , mid + 1 ,e);
    // Marge 
    Marge(arr , s ,  e);
}


int main(int argc, const char** argv) {
    int arr[15] = {5 , 6, 2 , 78 , 1 , 13 , 14 ,5 ,12 , 6 , 89 ,11 , 56 , 17, 90 };
    int n = 15;
    MargeSort(arr , 0 , n -1);
    print(arr , n);
    return 0;
}