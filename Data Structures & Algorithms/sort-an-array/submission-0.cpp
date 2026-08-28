class Solution {
public:
   
    void merge(vector<int>& nums, int l , int r){
        int m = l + (r-l)/2;
        if(l>=r)    return;

        merge(nums,l ,m ); //spilliting 1rst hafl
        merge(nums,m+1,r); //spillintng 2nd  half

        int i=l ;//l to m
        int j=m+1; //m+1 to r
        int k=0;
        vector<int> temp;

        while(i<=m && j<=r){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }
            else
                temp.push_back(nums[j++]);
        }

        while(i<=m){
            temp.push_back(nums[i++]);
        }
        while(j<=r)
           temp.push_back(nums[j++]);

        int b = 0;
        for(int a = l ; a<=r; a++){
            nums[a] = temp[b];
            b++;
        }

    }
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<=1)  return nums;

        merge(nums, 0 , nums.size()-1);
        return nums;
    }
};