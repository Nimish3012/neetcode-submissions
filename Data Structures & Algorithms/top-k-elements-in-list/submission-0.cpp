class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp; //val ,count
        for(int i=0; i<n;  i++){
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>> vec(mp.begin(),mp.end());

        //sort based on count
        sort(vec.begin(),vec.end(), [](const auto&a,const auto&b){
            return a.second > b.second;
        });
         
        vector<int> res;
        //return top k counts
        for(int i=0; i<k; i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};
