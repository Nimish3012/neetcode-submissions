class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector ans(nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());

        return ans;
    }
};