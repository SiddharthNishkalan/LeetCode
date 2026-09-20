class Solution(object):
    def reverseDegree(self, s):
        total = 0
        for count, char in enumerate(s, 1):
            rev = 26 - (ord(char) - ord('a'))
            total += rev * count
        return total
       