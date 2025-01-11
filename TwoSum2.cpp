class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> HashMap;
        for(int i=0;i<nums.size();i++){
                HashMap[nums[i]]=i;
                }
            for(int j=0;j<nums.size();j++){ 
                int look=target-nums[j];
                if (HashMap.count(look) && HashMap[look]!=j){
                return {j,HashMap[look]};}
            
        }
        return{};
    }
};
