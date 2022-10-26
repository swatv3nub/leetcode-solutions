class Solution {
public:
    int myAtoi(string s) {
        int sed = 0, sign = 1, res = 0, flag = 0;
        while(sed < s.length()) {
            if(!flag && s[sed] == ' ') { ; }
            else if(!flag && s[sed] == '+') sign = flag = 1;
            else if(!flag && s[sed] == '-') { sign = -1; flag = 1; }
            else {
                flag = 1;
                int digit = (int)s[sed] - (int)'0';                
                if(digit < 0 || digit > 9) break; digit *= sign;
                if(res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7)) res = INT_MAX;
                else if(res < INT_MIN / 10 || (res == INT_MIN / 10 && digit < -8)) res = INT_MIN;
                else res = 10 * res + digit;
            } sed++;
        }
        return res;
    }
};