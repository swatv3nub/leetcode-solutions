class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        int fir=1;
        int sec=2;
        for(int i=3;i<=n;i++){
            int thr=sec+fir;
            fir=sec;
            sec=thr;
        }
        return sec;
    }
};