class Solution {
public:
// result at i = total before i * total after i
// i.e.  result[i] = pref[i] × suff[i]


    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int>pre(n,1);
        int prefix = 1;
        for(int i=0; i<n; i++){
            pre[i]=prefix;
            prefix*=nums[i];
        }

        vector<int>suf(n,1);
        int sufix = 1;
        for(int i=n-1; i>=0; i--){
            suf[i]=sufix;
            sufix*=nums[i];
        }

        vector<int>res(n);
        for(int i=0; i<n;i++){
            res[i] = pre[i]*suf[i];
        }
        return res;
    }
};
