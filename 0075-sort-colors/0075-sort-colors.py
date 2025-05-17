from typing import List

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        n = len(nums)
        l = 0
        mid = 0
        r = n - 1
        while mid <= r:
            if nums[mid] == 0:
                nums[l], nums[mid] = nums[mid], nums[l]
                l += 1
                mid += 1
            elif nums[mid] == 1:
                mid += 1
            else:
                nums[mid], nums[r] = nums[r], nums[mid]
                r -= 1