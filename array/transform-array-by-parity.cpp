class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int ev=0;
        for(int x:nums){
            if(x%2==0){
                ev++;
            }
        }
        vector<int> arr(nums.size());
        for(int i=0;i<ev;i++){
            arr[i]=0;
        }
        for(int i=ev;i<nums.size();i++){
            arr[i]=1;
        }
        return arr;
    }
};