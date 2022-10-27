// And we have to do this in 5m in Interview, WOW!

class Solution {
public:
    int maxArea(vector<int>& height) {
        int pani = 0, lf = 0, rt = height.size()-1;
        while(lf<rt){
            pani = max(pani,min(height[lf],height[rt]) * (rt-lf));
            height[lf]<height[rt] ? lf++ : rt--;
        }
        return pani;
    }
};