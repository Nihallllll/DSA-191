// so i did some digging and came to a conclusion 
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 1 || nums.size() == 0) {
            return nums;
        }
        int n = nums.size();
        vector<vector<int>> result;
        int mini = nums[0][0];
        int maxi = nums[0][1];
        for (int i = 0; i < nums.size(); i++) {
            int start = nums[i][0];
            int end = nums[i][1];
            if(maxi >= start){
                maxi = max(maxi, end);
                continue;
            }else{
                result.push_back({mini,maxi});
                mini = start;
                maxi = end;
            }
        }
        result.push_back({maxi,mini});
        return result;
    }
};