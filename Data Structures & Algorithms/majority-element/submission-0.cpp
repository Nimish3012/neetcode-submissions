class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c ,v =0;

        for(int i=0;i<nums.size(); i++){
            if(v==0)    c = nums[i];

            if(nums[i]==c)  v++;
            else    v--;
        }
        return c;
    }
};