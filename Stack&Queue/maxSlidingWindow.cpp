#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int>ans;
    int n = nums.size();

    // 1st window
    for(int i =0; i<k;i++){
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.pop_back(i);


    }

    for(int i =0; i<n;i++){
        ans.push_back(dq.front());
        while(dq.size() > 0 and dq.front() <=  i -k){
            dq.pop_front();
        } 
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}
vector<int> maxSlidingWindowNaive(vector<int>& nums, int k) {
    vector<int> result;
    int n = nums.size();

    for (int i = 0; i <= n - k; i++) {
        int maxVal = nums[i];
        for (int j = i + 1; j < i + k; j++) {
            if (nums[j] > maxVal)
                maxVal = nums[j];
        }
        result.push_back(maxVal);
    }

    return result;
}
int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxSlidingWindow(nums, k);

    cout << "Maximums of each sliding window of size " << k << ": ";
    for (int maxVal : result) {
        cout << maxVal << " ";
    }

    return 0;
}
