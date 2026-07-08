class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] >= 0)
            {
                b.push_back(nums[i]);
            }
            else{
                a.push_back(nums[i]);
            }
        }

        for(int i=0; i<a.size(); i++)
        {
            a[i] = a[i] * a[i];
        }
        reverse(a.begin(), a.end());

        for(int i=0; i<b.size(); i++)
        {
            b[i] = b[i] * b[i];
        }

        vector<int>res;
        int i=0, j=0;
        int n = a.size();
        int m = b.size();

        while(i<n && j<m)
        {
            if(a[i] <= b[j])
            {
                res.push_back(a[i]);
                i++;
            }
            else{
                res.push_back(b[j]);
                j++;
            }
        }
        while(j<m)
        {
            res.push_back(b[j]);
            j++;
        }
        while(i<n)
        {
            res.push_back(a[i]);
            i++;
        }
        return res;
    }
};