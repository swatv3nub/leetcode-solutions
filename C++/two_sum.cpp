class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i=0; i<nums.size(); i++) {
            int owo = target - nums[i];
            for (int j=i+1; j<nums.size(); j++) if (nums[j] == owo) return {i, j};
        }
        return {-1, -1};
    }
};