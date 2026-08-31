class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str;

        for(auto str : strs){
            encoded_str += to_string(str.size());
            encoded_str += '#';
            encoded_str += str;
        }

        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        
        int i=0;
        
        while(i<s.size()){
            string digits = "";

            while(s[i]!='#'){
                digits+=s[i];
                i++;
            }

            //here s[i] is #
            int curr_str_length = stoi(digits);
            i++; //push i to next digits after # 

            string curr_str = s.substr(i,curr_str_length);

            decoded.push_back(curr_str);
            i+= curr_str_length;
        }

        return decoded;
    }
};
