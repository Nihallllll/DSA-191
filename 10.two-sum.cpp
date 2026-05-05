// used hashmap and this is the best approach

#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            int remaining =  target - nums[i];
            auto it = umap.find(remaining);
            if(it != umap.end() && it->second!= i){
                return  {it->second, i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};
//Final advice : Sequence in the code matters 