class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        int i= m-1;
        int j= n-1;
        while(i>=00 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[last--] = nums1[i--];
            }
            else{
                nums1[last--] = nums2[j--];
            }
        }
        // no loop needed for i, as nums1 already have it in sorted order 
        while(j>=0){
            nums1[last--] = nums2[j--];
        }
    }
};