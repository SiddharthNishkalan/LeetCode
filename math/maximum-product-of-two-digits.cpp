class Solution {
public:
    int maxProduct(int n) {
        int pro=1;
        int temp=n;
        while(temp>0){
            pro*=temp%10;
            temp/=10;
        }
        return pro;
    }
};