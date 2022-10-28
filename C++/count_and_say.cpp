class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)  return "1";
        string s = countAndSay(n-1);
        string ss = "";
        int i = 0;
        while(i < s.size()){
            char c = s[i];
            int last_idx = s.find_first_not_of(c, i);
            int num = last_idx == -1 ? s.size()-i:last_idx-i;
            i = last_idx;
            ss += (to_string(num)+c);
        }
        return ss;
    }
};