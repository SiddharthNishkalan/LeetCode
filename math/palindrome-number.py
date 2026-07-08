class Solution(object):
    def isPalindrome(self, x):
        x=list(str(x))
        left=0
        right=len(x)-1
        while(right>=left):
            if(x[right]==x[left]):
                right-=1
                left+=1
                pass
            else:
                return False
        return True
        

        