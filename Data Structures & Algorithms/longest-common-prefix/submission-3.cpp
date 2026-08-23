class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //vertical check

        for(int i=0; i<strs[0].size(); i++){  //all char of 1rst str
            for(auto s : strs) //all strings in vector 1 by 1
            {
                if(i== s.length() || s[i]!= strs[0][i])  
                //i reaches smallest string length among all strings 
                //  || any 1 char of all the strings mismatch ith char at strs[0];
                    return s.substr(0,i);
            }
        }
        return strs[0];
    }
};