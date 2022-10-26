class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (auto ch : s)
            if (isalnum(ch))
                str.push_back(tolower(ch));
        for (int i = 0, j = str.size()-1; i < j; ++i, --j)
            if (str[i] != str[j])
                return false;
        return true;
    }
};