class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0, windowAverage = 0;
        for(int i=0; i<k; i++) {
            windowSum += nums[i];
        }
        double maxAverage = 0;
        windowAverage = windowSum/k;
        maxAverage = windowAverage;

        for(int i=k; i<nums.size(); i++) {
            windowSum = windowSum - nums[i-k];
            windowSum = windowSum + nums[i];
            windowAverage = windowSum/k;

            if(windowAverage > maxAverage) {
                maxAverage = windowAverage;
            }
        }
        return maxAverage;
    }
};