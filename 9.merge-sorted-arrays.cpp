
//First solution i can think of is :
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> store;
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                store.push_back(nums1[i]);
                i++;
            } else {
                store.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            store.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            store.push_back(nums2[j]);
            j++;
        }

        nums1 = store;
    }
};


//optimal approach
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m -1 ;
        int j = n -1 ;
        int x = nums1.size() - 1;
        while(i >= 0 && j >=0){
            if(nums1[i] >= nums2[j]){
                nums1[x] = nums1[i];
                i--;
            }else{
                nums1[x] = nums2[j];
                j--;
            }
            x--;
        }
        while(i>=0){
            nums1[x] = nums1[i];
            i--;
            x--;
        }
        while(j>=0){
            nums1[x] = nums2[j];
            j--;
            x--;
        }
    }
};

//FINAL ADVICE : Think all things are before you 