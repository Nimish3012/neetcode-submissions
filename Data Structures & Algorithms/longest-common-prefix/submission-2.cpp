class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sorting the vector and 
        // comparing 1rst (smallest string) with last (largest) string

        if(strs.size() ==1) return strs[0];

        sort(strs.begin(), strs.end()); 
        //strs[0] is the smallest string 

        for(int i=0; i<strs[0].size(); i++){
            if(strs[0][i] != strs.back()[i]) //if any char miss match , exit here
                return strs[0].substr(0,i);
        }
        //loop completed means 1rst string is the common prefix
        return strs[0];
    }
};