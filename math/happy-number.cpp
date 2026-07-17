class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        else if(n<10) return false;
        int cur=0;
        while(n>0){
            int temp=n%10;
            cur+=temp*temp;
            n=n/10;
            
        }
        return isHappy(cur);
    }
};