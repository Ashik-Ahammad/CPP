#include <iostream>
#include <vector>
using namespace std;

// O (n)

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;

    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans; // Return the indices of the pair
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