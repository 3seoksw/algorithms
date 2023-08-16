class Solution:
    def twoSum(self, nums, target):
        table = {}

        for i, num in enumerate(nums):
            val = target - num
            if val in table:
                return [i, table[val]]
            else:
                table[val] = i
