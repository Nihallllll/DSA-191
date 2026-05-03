//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.



//First solution using hashmap 
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> counter;
        for(int i=0;i<nums.size();i++){
            counter[nums[i]]++;
            if(counter[nums[i]]==2){
                return nums[i];
            }
        }
        return -1;
    }
};

