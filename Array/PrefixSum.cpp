#include <iostream>
#include <vector>
using namespace std;


vector<int> buildPrefixSumArray(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixSum(n);
    
    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    
    return prefixSum;
}


int getRangeSum(const vector<int>& prefixSum, int L, int R) {
    if (L == 0)
        return prefixSum[R];
    else
        return prefixSum[R] - prefixSum[L-1];
}

int main() {
    vector<int> arr = {2, 8, 3, 9, 6, 5, 4}; 
    
    vector<int> prefixSum = buildPrefixSumArray(arr);
    
    int L = 2, R = 5; 
    
    cout << "Sum of elements from index " << L << " to " << R << " is ";
    cout << getRangeSum(prefixSum, L, R) << endl;
    
    return 0;
}
