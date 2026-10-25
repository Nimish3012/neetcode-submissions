class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        int i=m-1;
        int j=n-1;
        //as we know we have i already in place in nums1 , we only iterate for j
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j])
                nums1[last--] = nums1[i--];
            else
                nums1[last--] = nums2[j--];
        }
    }
};