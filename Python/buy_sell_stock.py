class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        prof = 0
        for dex in range(1, len(prices)):
            prof += max(prices[dex]-prices[dex-1], 0)
        return prof
