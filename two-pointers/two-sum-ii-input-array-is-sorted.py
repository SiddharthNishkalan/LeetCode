class Solution(object):
    def twoSum(self, numbers, target):
        right=0
        left=len(numbers)-1
        while right<left:
            s=numbers[right]+numbers[left]
            if s==target:
                return [right+1,left+1]
            elif s>target:
                left-=1
            else:
                right+=1
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        