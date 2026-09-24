class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1)
            return n;

        int l  = 1 , lm = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n ; i++){
            if(nums[i]==nums[i-1]+1)
                l++;

            else if(nums[i]==nums[i-1]) 
                lm = max(lm,l);

            else l = 1;

            lm = max(lm,l);
        }
        
        return lm;
    }
};
