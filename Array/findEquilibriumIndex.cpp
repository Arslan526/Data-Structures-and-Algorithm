#include<iostream>
using namespace std;
int findEquilibriumIndex(int * arr, int n){
    int totalsum = 0;
    for(int i =0;i < n;i++){
        totalsum+= arr[i];
    }
    int leftsum = 0;

    for(int i =0; i<n;i++){
        int rightsum = totalsum - leftsum - arr[i];

        if(leftsum == rightsum) return i;

        leftsum += arr[i];
    }
    return -1;
}
int main(){
    int arr[7] = {-7 , 1 , 5,2,-4,3, 0};
    int index = findEquilibriumIndex(arr , 7);
    
    if (index != -1)
        cout << "Equilibrium Index is: " << index << endl;
    else
        cout << "No Equilibrium Index found." << endl;
    
    return 0;
}