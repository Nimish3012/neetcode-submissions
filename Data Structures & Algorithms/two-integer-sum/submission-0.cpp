class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size();i++){
            int k = target-nums[i];
            if(mp.find(k)!=mp.end())
                return {mp[target-nums[i]],i};
            // if(mp[k])
            //     return {mp[target-nums[i]],i};
            //  do not do this as 
            // using operator[] just to check existence is generally a bug.
            //it will fail if index is zero as value , even if key is presetn 
            // also it will add one new key as value zero in the map
            
            mp[nums[i]]=i;
        }

        return {1,1};
    }
};
