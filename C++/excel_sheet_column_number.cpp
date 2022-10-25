class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(char pp : columnTitle)
        {
			int x = pp - 'A' + 1;
            res = res * 26 + x;
        }
        return res;
    }
};