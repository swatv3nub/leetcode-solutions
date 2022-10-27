class Solution {
public:
    int reverse(int x)
    {
        long int sol = 0;
        while(x != 0) {
            sol = (sol * 10) + (x % 10);
            x = x/10;
        }
        if(sol > INT_MAX || sol < INT_MIN) {
            return 0;
        }
        return sol;
    }
};