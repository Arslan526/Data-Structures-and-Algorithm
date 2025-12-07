#include <bits/stdc++.h>
using namespace std;
bool flag =0;

void PrintSubsetSum(int i , int n , int arr[] , int targetsum  , vector<int>&subset){
    if(targetsum ==  0){
        cout<<"[";

        flag =1;

        for(int i =0; i<subset.size();i++){
            cout<<arr[i] <<" ";

        }
        cout<<"]";
        return;
    }

    if(i == n){
        return;
    }
    PrintSubsetSum(i+1 , n , arr , targetsum , subset);

    if(arr[i] <= targetsum){
        subset.push_back(arr[i]);
        PrintSubsetSum(i +1 , n , arr , targetsum - arr[i], subset);
       subset.pop_back();
    }
    
}
int main()
{
    // Test case 1
    int set[] = { 1, 2, 1 };
    int sum = 3;
    int n = sizeof(set) / sizeof(set[0]);
    vector<int> subset;
    cout << "Output 1:" << endl;
    PrintSubsetSum(0, n, set, sum, subset);
    cout << endl;
    flag = 0;
    // Test case 2
    int set2[] = { 3, 34, 4, 12, 5, 2 };
    int sum2 = 30;
    int n2 = sizeof(set) / sizeof(set[0]);
    vector<int> subset2;
    cout << "Output 2:" << endl;
    PrintSubsetSum(0, n2, set2, sum2, subset2);
    if (!flag) {
        cout << "There is no such subset";
    }
 
    return 0;
}