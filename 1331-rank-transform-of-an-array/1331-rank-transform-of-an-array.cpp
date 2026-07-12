class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp(arr);
        sort(temp.begin(), temp.end());
        int rank = 1;
        unordered_map<int, int>mp;
        for(int i=0; i<temp.size(); i++)
        {
            if(i==0)
            {
                mp[temp[i]] = rank;
            }
            else{
                if(temp[i] != temp[i-1]){
                    rank++;
                }
                mp[temp[i]] = rank;
            }
        }
        vector<int>ans;
        for(int i=0; i<arr.size(); i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};