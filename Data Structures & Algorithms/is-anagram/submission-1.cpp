class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())  return false;

        int arr[26] = {0};

        for(auto c : s){
            arr[c-'a']++;
        }
        for(auto c: t){
            arr[c-'a']--;
        }

        for(auto i : arr){
            if(i)   return false;
        }

        return true;
    }
};
