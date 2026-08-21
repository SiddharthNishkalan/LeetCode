class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                index=i;
                break;
                }  
        }
        if(index!=-1){
            int l=0;
            int r=index;
            while(l<r){
                swap(word[l],word[r]);
                l++;
                r--;
            }
        }
        return word;
    }
};