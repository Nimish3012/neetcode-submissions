class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //lets avoid using a loop ,and reallocating the vector
        vector<int> ans(2*nums.size());

        copy(nums.begin(),nums.end(), ans.begin());
        copy(nums.begin(),nums.end(), ans.begin()+nums.size());

        return ans;
    }
};