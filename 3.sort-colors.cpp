//first solution after watching hint was 
#include <bits10_1.h>/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one  = 0;
        int two  = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else if(nums[i]==1){
                one++;
            }else{
                two++;
            }
        }
        int i = 0;
        while(zero > 0){
            nums[i] = 0;
            i++;
            zero--;
        }
        while(one > 0){
            nums[i] = 1;
            i++;
            one--;
        }
        while(two > 0){
            nums[i] = 2;
            i++;
            two--;
        }
    }
};


// optimal and single pass solution also known as DUTCH-NATIONAL-FLAG algorithm 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int m=0;
        int h=nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else if(nums[m]==2){
                swap(nums[h],nums[m]);
                h--;
            }
        }
    }
};

//Final advice : You must know the named algorithms 