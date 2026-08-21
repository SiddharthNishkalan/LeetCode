class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int first=0;
        int count=0;
        
        while(first < nums.size()){
            int second=first+1;
            while(second< nums.size()){
            if(nums[first]+nums[second] < target){
                count++;
            }
            second++;
            }
            first++;
        }
        return count;
    }
};