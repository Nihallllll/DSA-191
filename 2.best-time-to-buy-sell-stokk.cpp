// first solution 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int mini = 0;
        int maxi = 0;
        int i = 0;
        int j = 1;
        while(j<n){
            mini = prices[i];
            maxi =prices[j];
            if(prices[j] < prices[i]){
                i = j;
                mini = prices[i];
            }
            profit = max(maxi-mini , profit);
            j++;
            }
        return profit;
    }
};


// stright forward approach 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int res = 0;
        for(int i=0;i<prices.size();i++){
            res = max(res,prices[i]-mini);
            mini = min(mini , prices[i]);
        }
        return res;
    }
};


//Final advice : Dont complicate things 