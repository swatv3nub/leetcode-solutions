/* Example:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0||(dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        else
            return (dividend-dividend%divisor)/divisor;
    }
};