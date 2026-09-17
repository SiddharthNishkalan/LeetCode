class Solution(object):
    def firstUniqueFreq(self, nums):
        freq=Counter(nums)
        freqfreq=Counter(freq.values())
        for i in nums:
            if freqfreq[freq[i]]==1:
                return i
        return -1
        """
        :type nums: List[int]
        :rtype: int
        """
        