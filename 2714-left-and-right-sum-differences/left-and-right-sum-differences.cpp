class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightSum = 0;
        
        for (int num : nums) {
            rightSum += num;
        }

        int leftSum = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            rightSum -= nums[i];  // sum of elements to the right

            ans.push_back(abs(leftSum - rightSum));

            leftSum += nums[i];   // update left sum
        }

        return ans;
    }
};