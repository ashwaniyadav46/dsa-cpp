class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int k = 0; k < 32; k++){
            int count = 0;
            for(int num : nums){
                if(num & (1 << k)){
                    count++;
                }
            }
            if(count % 3 !=  0){
                ans |= (1 << k);
            }
        }
        return ans;
    }
};