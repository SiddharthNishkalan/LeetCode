class Solution(object):
    def isPalindrome(self, str):
        s = ""
        for i in str:
            if i.isalnum():
                s += i.lower()
                
        return s == s[::-1]
        """
        :type s: str
        :rtype: bool
        """
        