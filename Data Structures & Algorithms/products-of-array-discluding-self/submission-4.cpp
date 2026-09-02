class Solution {
public:
    //cases
    //no zeros simply do  all prod / num
    //1 zero  means prod at that place else all zeros
    //2 zero measn return entire 0 prods

    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int zees = 0;
        int ind = -1;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0) {
                zees++;
                ind = i;
            }   
            else
                total*=nums[i];
        }
   
        if(zees>1)  return vector<int>(nums.size(),0);
        

        else if(zees==1){
            vector<int> res(nums.size(),0);
            res[ind]=total;
            return res;
        }

        vector<int> res1;
        
            for(auto n : nums){
                res1.push_back(total/n);
            }
        
        return res1;
    }
};
