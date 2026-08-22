class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;

        int arr[26] = {0};
        //single pass 
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;  //increment for s
            arr[t[i]-'a']--;  //decrement for t

        }

        //verfication pass
        for(auto i : arr)
        {
            if(i)   return false;
        }

        return true;
    }
};
