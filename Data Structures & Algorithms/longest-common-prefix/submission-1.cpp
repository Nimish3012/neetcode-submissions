class Solution {
public:
    string helper(string a , string b){
        int n = min(a.size(), b.size());
        string res = "";
        for(int i=0 ; i<n; i++){
            if(a[i]==b[i])  res+=a[i];

            else    return res;
        }

        return res;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for(int i=1; i<strs.size() ;i++){
            ans = helper(ans,strs[i]);

            if(ans.size()==0)   return "";
        }
        return ans;
    }
};