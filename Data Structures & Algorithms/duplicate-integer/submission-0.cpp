class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto itr: nums){
            st.insert(itr);
        }

        return (st.size()!=nums.size());
    }
};