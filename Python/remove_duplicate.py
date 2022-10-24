class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ki = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i-1]:
                nums[ki] = nums[i]
                ki += 1
        return ki