#include<iostream>
#include<set>
using namespace std;
 int doUnion(int a[], int n, int b[], int m)  {
        int i = 0;
        int j = 0;
        
        while(i < n && j < m){
           if(a[i] < b[j]){
               if(i == 0)
             cout<< a[i]<<" ";
               else if(a[i] != b[i-1])
                 cout<< a[i]<<" ";
                   i++;
           } 
           if(a[i] >  b[j]){
               if(j == 0)
           cout<< b[j]<<" ";
               else if(a[j] != b[j-1])
                   cout<< b[j]<<" ";
                   j++;
           }
           else if(a[i] != a[i -1] && b[j] != b[j -1]){
           cout<< a[i]<<" ";
               i++;
               j++;
           }
        }
        while(i < n){
            if(a[i] != a[i -1]){
                  cout<< a[i]<<" ";
                i++;
            }
        }
         while(i < n){
            if(b[j] != b[j -1]){
              cout<< b[j]<<" ";
                j++;
            }
         }
         cout<< a[i] << endl;
         cout<< b[j]<< endl;
      
 }
 int main(int argc, const char** argv) {
    int arr1[3] = {1 ,2 ,4};
    int arr2[4]= {1 ,2 ,3,4};
    cout<<"Union of two sorted array " <<doUnion(arr1 , 3 , arr2 , 4)<< endl;
     return 0;
 }