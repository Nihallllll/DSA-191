//First solutiom that came 
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size() -1 ;i>0;i--){
            if(nums[i] > nums[i-1]){
                for(int j=nums.size()-1;j>=i;j--){
                    if(nums[j] > nums[i-1]){
                        swap(nums[i-1],nums[j]);
                        reverse(nums.begin() + i , nums.end());
                        return ;
                    }
                }
            }
        }
        reverse(nums.begin()  , nums.end());
    }
};

//most optimal one
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int i = n-2;
        
        while(i>=0 && nums[i] >= nums[i+1]){i--;}

        if(i>=0){
            int j=n-1;
            while(nums[j] <= nums[i]){j--;}
            swap(nums[j],nums[i]);

        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};

//Final advice : Things are easy after you know how to solve it 