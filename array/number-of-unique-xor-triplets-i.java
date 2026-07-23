class Solution {
    public int uniqueXorTriplets(int[] nums) {
        int n=nums.length;
        if(n<=2) return n;
        int mask=1;
        while(mask<=n){
            mask<<=1;
        }
        return mask;
    }
}