class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mm = n/3;
        
        vector<int> res;
        if(n<=3)    res;

        int c1 = INT_MIN , c2=INT_MIN;
        int v1 = 0, v2=0;

        for(auto num : nums){
            if(v1==0 && c2!=num){
                c1=num;
                v1=1;
            }
            else if(v2==0 && c1!=num){
                c2=num;
                v2=1;
            }

            else if(c1==num)    v1++;
            else if(c2==num)    v2++;

            else{
                v1--;   v2--;
            }
        }
        //validation most imp
        v1=0, v2 = 0;
        for(auto num : nums){
            if(c1==num) v1++;
            if(c2==num) v2++;
        }
        if(v1>mm)   res.push_back(c1);
        if(v2>mm)   res.push_back(c2);
        return res;
    }
};