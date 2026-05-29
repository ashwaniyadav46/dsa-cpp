class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int n = nums.size();
     int res = INT_MAX;
     for(int i = 0; i < n ; i++){
        int cursum = 0; 
        int j = i;
        while(j < n){
            cursum += nums[j];
            if(cursum >= target){
                res = min(res, j - i + 1);
                break;
            } 
            j++;
        }
        
     }
    return res == INT_MAX ? 0 : res;
    
    }
};