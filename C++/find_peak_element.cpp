// Using Sasta and Tikau Linear Search

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int ans = nums.size()-1;
       int n = nums.size(); 
        for(int i =0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                ans = i;
                return ans;
            }
        }
        return ans;
    }
};