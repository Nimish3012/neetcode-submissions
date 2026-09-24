class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1)    return n;

        unordered_set<int> st;
        for(auto num : nums){
            st.insert(num);
        }
        int mxcnt = 0;
        for(int i=0; i<n; i++){
            int num = nums[i];
            if(st.find(num-1)==st.end()){
                int temp = num+1;
                int cnt = 1;

                while(st.find(temp)!=st.end()){
                    temp++;
                    cnt++;
                }

                mxcnt = max(cnt , mxcnt);
            }
        }
        return mxcnt;
    }
};
