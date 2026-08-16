
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0; //track the keeper elements

        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[k++]=nums[i];  //over write at kth index
            }
            //do not increment k if a non valid element is there
            //later will be overwritten 
        }
        return k;
    }
};