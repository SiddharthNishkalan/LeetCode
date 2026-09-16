class Solution(object):
    def minMoves(self, nums):
        return sum(nums)-len(nums)*nums
        """
        :type nums: List[int]
        :rtype: int
        """
        