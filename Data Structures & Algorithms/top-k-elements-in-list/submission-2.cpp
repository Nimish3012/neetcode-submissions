class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ; //val , count 

        for(auto n : nums){
            mp[n]++;
        }

        vector<vector<int>>freq(nums.size()+1);

        for(auto m : mp){
            freq[m.second].push_back(m.first);
        }

        vector<int> res;

        for(int i=freq.size()-1 ; i>0; i--){
            for(auto n : freq[i]){
                res.push_back(n);

                if(res.size()==k)
                    return res;
            }
        }
        return res;
    }
};
