#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
void findcommonElement(int * arr1 , int * arr2 , int* arr3 , int n , int m , int m1){
    int i =0 , j = 0 , k = 0;
    while( i < n && j < m && k < m1){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            cout<< arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j] < arr3[k] ){
            j++;
        }else
        k++;
    }
}
vector<int> findcommonElementSolve(vector<int>&arr1 , vector<int>&arr2 , vector<int>&arr3){
    int n = arr1.size();
    int m = arr2.size();
    int m1 = arr3.size();
    int i = 0 , j = 0, k = 0;
    
    vector<int>ans;

    while(arr1[i] == arr1[i -1] && i < n ){
        i++; 
    }
    while(arr2[j] == arr2[j -1] && j < m ){
        j++; 
    }
    while(arr3[k] == arr3[k -1] && k < m1 ){
        k++; 
    }
    if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
        ans.push_back(arr1[i]);
       i++;
       j++;
       k++;
    }
    else if(arr1[i] < arr2[j]){
        i++;
    }
    else if(arr2[j] < arr3[k]){
       j++;
    }
    else {
        k++;
    }
    return ans;
    for(int i =0; i<arr1.size();i++){
        cout<<ans[i] <<" ";
    }
    cout<<endl;

}
int main(){
    // int ar1[7] = { 1, 5, 10, 20, 40, 80 };
    // int ar2[12] = { 6, 7, 20, 80, 100 };
    // int ar3[13] = { 3, 4, 15, 20, 30, 70, 80, 120 }; 
    // cout<<"Common element in soreted array "<<endl;

    // findcommonElement(ar1 , ar2 ,ar3 , 7 , 12 , 13);
    vector<int>arr1 =  { 1, 5, 10, 20, 40, 80 };
    vector<int>arr2 = { 6, 7, 20, 80, 100 };
    vector<int>arr3 = { 3, 4, 15, 20, 30, 70, 80, 120 }; 
    int n = arr1.size();
    int m = arr2.size();
    int m1 = arr3.size();
   
     cout << "Common Element 3 Sorted  arrays:";
     vector<int>ans = findcommonElementSolve(arr1 , arr2 , arr3);

    for(int nums : ans){
        cout<<nums <<" ";
    }
    cout<<endl;
    
   
}