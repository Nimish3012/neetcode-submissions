class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int n = word1.length(), m = word2.length();

        string s;
        while(i<n && i<m){
            s+=word1[i];
            s+=word2[i];

            i++;
        }
        if(n!=m && i==n){
            s+=word2.substr(i);
        }
        else if(n!=m && i==m){
            s+=word1.substr(i);
        }

        return s;
    }
};