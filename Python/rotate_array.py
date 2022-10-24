class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        #nums[:] = nums[len(nums) - k:] + nums[:len(nums) - k]
        while k > 0:
            nums.insert(0, nums.pop())
            k -= 1