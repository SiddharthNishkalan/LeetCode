class Solution(object):
    def countCommas(self, n):
        if n<1000:
            return 0
        commas=0
        start=1000
        while start<=n:
            commas=commas+ n-start+1
            start*=1000
        return commas
        """
        :type n: int
        :rtype: int
        """
        