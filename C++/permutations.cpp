class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> op;
        sort(nums.begin(),nums.end());
        do{
            op.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
            return op;
    }
};