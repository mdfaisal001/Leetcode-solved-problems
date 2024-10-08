class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int index = -k;
        int n = nums.size();
        int kth_Element = n + index;
        return nums[kth_Element];
    }
};