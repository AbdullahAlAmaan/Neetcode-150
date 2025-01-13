class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int left=0; //Since this even nums, all other values XOR equals 0
        for (int i=0;i<nums.size();i++){
            int num=nums[i];
            left^=num;
        }
        return left;
    }
};
