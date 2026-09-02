class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);

        // Step 1: Populate res with prefix products (same as your 'pre' array)

        int prefix = 1;
        for(int i=0; i<n; i++){
            res[i] = prefix;
            prefix*=nums[i];
        }
         // Step 2: Multiply by suffix products on the fly
        int sufix = 1;
        for(int i=n-1; i>=0; i--){
            res[i] *= sufix;
            sufix *= nums[i];
        }
        return res;
    }
};
 