class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left  = 0, right = n-1;
        int maxArea = 0;
        while(left < right)
        {
            int width = right-left;
            int ht = min(height[left], height[right]);
            int Area = width * ht;
            maxArea = max(Area, maxArea);
            if(height[left] <= height[right]){
                left++;
            }
            else{
                right--;
            }    
        }
        return maxArea;
    }
};