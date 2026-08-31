class Solution {
public:
    const char seperator = static_cast<char>(0xFF); 

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto s : strs){
            encoded += s;
            encoded += seperator;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]==seperator){
                decoded.push_back(str);
                str="";
            }
            else
                str += s[i];
        }

        return decoded;
    }
};
