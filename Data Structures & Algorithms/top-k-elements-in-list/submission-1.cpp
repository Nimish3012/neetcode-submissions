class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto n : nums){
            mp[n]++;   //storing all frequesncies 
        }

        //mp <value , count>  

        vector<pair<int,int>> v;
        for(auto m : mp){
            v.push_back({m.second , m.first});  //{count , value}
        }

        //reverse sort 
        sort(v.rbegin(), v.rend());

        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(v[i].second);  //add top k value
        }
        return res;
    }
};
