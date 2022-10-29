class Solution {
    vector<int>ans,a;
public:
    Solution(vector<int>& nums) {
        ans=nums;
        a=nums;
    }
    vector<int> reset() {
        return a;
    }
    vector<int> shuffle() {
        random_shuffle(ans.begin(),ans.end());
        return ans;
    }
};