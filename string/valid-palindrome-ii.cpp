class Solution {
public:
    bool palindrome(const string&s,int right,int left){
        while(left<right){
            if(s[right]!=s[left]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(s[right]!=s[left]){
                return palindrome(s , right - 1, left) || palindrome(s ,  right, left + 1);
        }
        left++;
        right--;}
        return true;
    }
};