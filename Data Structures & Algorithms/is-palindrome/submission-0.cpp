class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(auto c : s){
            if((c >= '0' && c <='9') || (c>='a' && c<='z') || (c>='A' && c<='Z')){
                r+= tolower(c);
            }
        }
        string rr = r;
        reverse(rr.begin(),rr.end());
        return rr ==r ;
    }
};
