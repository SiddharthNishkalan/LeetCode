class Solution(object):
    def minMoves(self, nums):
        maxn=max(nums)
        n=0
        for i in range(len(nums)):
            n=n+(maxn-nums[i])
        return n
        """
        :type nums: List[int]
        :rtype: int
        """
        