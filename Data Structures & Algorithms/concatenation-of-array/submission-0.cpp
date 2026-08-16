class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector ans(nums.begin(),nums.end());
        for(auto itr : nums){
            ans.push_back(itr);
        }
        return ans ;
    }
};