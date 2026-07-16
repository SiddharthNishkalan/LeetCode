class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1;
        int end=num;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long s=mid*mid;
            if(s==num) return true;
            else if(s<num){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return false;
    }
};