class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>stk;
        vector<int>temp(nums.begin(), nums.end()-1);
        nums.insert(nums.end(), temp.begin(), temp.end());
        vector<int>res(nums.size());
        for(int i=nums.size()-1; i>=0; i--) {
            while(!stk.empty() && stk.top()<= nums[i]) {
                stk.pop();
            }

            if(stk.empty()) {
                res[i] = -1;
            } else {
                res[i] = stk.top();
            }
            stk.push(nums[i]);
        }
        res.resize(n);
        return res;
    }
};