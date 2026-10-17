class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int start = 0, end = 1;
        int count = 0;
        while(end < n){
            int diff = nums[end] - nums[start];
            if(start == end){
              end++;
              continue;
            }
            if(diff < k){
                end++;
            } 
            else if(diff > k){
                start++;
            }
            else{
                count++;
                int a = nums[start];
                int b = nums[end];
                while(start < n && nums[start] == a) start++;
                while(end < n && nums[end] == b) end++;
            }
        }
        return count;
    }
};