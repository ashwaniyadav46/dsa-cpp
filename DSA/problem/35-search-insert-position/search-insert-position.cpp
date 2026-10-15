class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int n = nums.size();
      int l = 0;
      int high = n - 1;
      while(l <= high){
        int mid = l + (high - l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) l = mid + 1;
        else high = mid - 1;
      }
      return l;
    }
};