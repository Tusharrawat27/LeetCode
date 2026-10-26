class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size());
        int n = temperatures.size();
        stack<int>stk;
        for(int i=n-1; i>=0; i--) {
            while(!stk.empty() && temperatures[stk.top()] <= temperatures[i]) {
                stk.pop();
            }
            if(stk.empty()) {
                ans[i] = 0;
            }
            else{
                ans[i] = stk.top() - i;
            }
            stk.push(i);
        }
        return ans;
    }
};