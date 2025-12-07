#include <iostream>
#include <vector>
using namespace std;

vector<int> IntersectionTwoArray(vector<int>& arr1, vector<int>& arr2) {
    int i = 0;
    int j = 0;
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}



int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> ans = IntersectionTwoArray(arr1, arr2);


    cout << "Intersection of Two arrays: "<<endl;
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}
