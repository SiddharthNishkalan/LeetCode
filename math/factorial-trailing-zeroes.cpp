class Solution {
public:
    long long fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*fact(n-1);
    }
    int trailingZeroes(int n) {
        long long fa=fact(n);
        if(fa<10) return 0;
        int count=0;
        while(fa%10==0){
            count++;
            fa=fa/10;
        }
        return count;
    }
};