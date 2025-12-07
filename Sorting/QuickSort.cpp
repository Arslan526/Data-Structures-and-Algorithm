
#include<iostream>
using namespace std;
void PrintArray(int  * arr , int n ){
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}
int partiction(int* arr , int s , int e){
  int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // Place pivot at rigth position
    int pivotindex = s + count;
    swap(arr[pivotindex] , arr[s]);

    // left and rigth wala part smbhal late  h
    int i = s;
    int j = e;
    while(i < pivotindex && j > pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex ){
            swap(arr[i++] , arr[j--]);

        } 
    }
    return pivotindex;
}
void  QuickSort(int * arr , int s , int e){
    if(s >= e){
        return;   
    }
    int p = partiction(arr ,s , e);
    QuickSort(arr , s , p - 1);
    QuickSort(arr , s , p +1);

}

int main(int argc, const char** argv) {

    int arr[15] = {5 , 6, 2 , 78 , 1 , 13 , 14 ,5 ,12 , 6 , 89 ,11 , 56 , 17, 90 };
    int n = 15;
    QuickSort(arr , 0 , n -1);
    cout<<"Quick sort using Recusion "<< endl;
    PrintArray(arr , n);

    return 0;
}