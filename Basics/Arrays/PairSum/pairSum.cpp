#include <iostream>
#include <vector>
using namespace std;

// brute force approach to find the indices of the pair of elements in an array that sum up to a given target value O(n^2) time complexity

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }
    }
    return ans; // Return an empty vector if no pair is found

}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    cout  << "Indices of the pair with sum: " << ans[0] << ", " << ans[1] << endl;

    return 0;
}