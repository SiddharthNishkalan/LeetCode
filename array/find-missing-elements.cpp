class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> adde;
        sort(nums.begin(),nums.end());
          for(int i = 1; i < nums.size(); i++) {
            int prev = nums[i-1];
            int curr = nums[i];

            while(prev + 1 < curr) {
                adde.push_back(prev + 1);
                prev++;
            }
        }
        return adde;
        
    }
};