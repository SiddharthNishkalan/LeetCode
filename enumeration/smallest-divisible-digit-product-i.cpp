class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=0;i<=10;i++){
            int pro=1;
            int temp=n;
            while(temp>0){
                pro*=(temp%10);
                temp=temp/10;
            }
            if(pro%t==0){
                return n;
            }
            n++;
        }
        return n;
    }
};