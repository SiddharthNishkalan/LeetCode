class Solution {
public:
    string reversePrefix(string s, int k) {
        int r=k-1;
        int l=0;
        while(l<r){
            swap(s[r],s[l]);
            r--;
            l++;
        }
        return s;
    }
};