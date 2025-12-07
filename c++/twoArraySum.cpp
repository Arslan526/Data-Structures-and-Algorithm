#include<iostream>
#include<vector>
using namespace std;
void Reverse(int arr[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s++] , arr[e]);
    }
}
 int ArraySum(int a[] ,int n , int b[] , int m) {
    int i = n -1;
    int j = m -1;
    int ans = 0;
    int carry = 0;

    while(i>=n && j>=m){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry  = sum /10;
        sum = sum % 10;
        i--;
        j--;
       return sum;
    }
    while(i>=0){
        int sum = a[i] + carry;
        carry  = sum /10;
        sum = sum % 10;
        i--;
         return sum;
    }
        while(j>=0){
        int sum = b[j] + carry;
        carry  = sum /10;
        sum = sum % 10;
        j--;
         return sum;
    }
        while(carry!=0){
        int sum =  carry;
        carry  = sum /10;
        sum = sum % 10;

        return sum;
    }
}

int main(){
    int arr1[6] = {1 ,2,3,4,8,9};
    int arr2[4] = {4 ,6,7 , 3};

    cout<<"Sum of Two Array "<< ArraySum(arr1 , 6 , arr2 , 4)<< endl;
    
    Reverse(arr1 , 6);
    return 0;
}