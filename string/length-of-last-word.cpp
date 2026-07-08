class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        bool counting=0;
        for(int i=s.length()-1 ;i>=0;i--){
            if(s[i]!=' '){
                counting=true;
                length++;
            }
            else if(counting){
                break;
            }
        }
        return length;
    }
};