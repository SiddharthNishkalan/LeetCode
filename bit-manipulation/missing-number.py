class Solution(object):
    def missingNumber(self, nums):
        asum=sum(nums)
        exsum=sum(range(len(nums)+1))
        return exsum-asum
        """
        :type nums: List[int]
        :rtype: int
        """
        