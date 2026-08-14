class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> ans(26,0);
        for(char c:letters){
            ans[c-'a']++;
        }
        for(int i=(target-'a')+1;i<ans.size();i++){
            if(ans[i]>0){
                return i+'a';
            }
        }
        return letters[0];
    }
};