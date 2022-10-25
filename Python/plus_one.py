class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        boop = int("".join(map(str, digits)))
        boop += 1
        return list(str(boop))