class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int  sum = 0;
        double maxaverage = -DBL_MAX;
        int l = 0;
        double average = 0;
        for(int r = 0; r < n; r++){
            sum += nums[r];
            average =  (double) sum /(r - l + 1);
            if(r - l + 1 == k){
                maxaverage = max(maxaverage, average);
                sum -= nums[l];
                l++;
            }
        }
        return maxaverage;
        
    }
};