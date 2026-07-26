class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxProduct = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int option1 = nums[n-1] * nums[n-2] * nums[n-3];
        int option2 = nums[0] * nums[1] * nums[n-1];
        maxProduct = max(option1, option2);
        return maxProduct;
    }
};