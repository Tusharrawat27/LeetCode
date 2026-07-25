class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    int freq[100001] = {0};
    int left = 0;
    long long maxSum = 0;
    long long windowSum = 0;
    int distinctCount = 0;
    
    for(int right = 0; right<nums.size(); right++) {
        if(freq[nums[right]] == 0) {
            distinctCount++;
        }
        freq[nums[right]]++;
        windowSum += nums[right];

        if(right >= k) {
            freq[nums[left]]--;
            if(freq[nums[left]] == 0) {
                distinctCount--;
            }
            windowSum -= nums[left];
            left++;
        }

        if(right >= k-1 && distinctCount == k) {
            maxSum = max(maxSum, windowSum);
        }
    }
    return maxSum;
    }
    
};