class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        return unordered_set<int>(nums.begin(),nums.end()).size() < nums.size();
    }
};

// Convert the array into a hash set, which removes duplicates.
// Compare the size of the set with the size of the original array.
// If the set is smaller, return true because duplicates must have been removed.
// Otherwise, return false.