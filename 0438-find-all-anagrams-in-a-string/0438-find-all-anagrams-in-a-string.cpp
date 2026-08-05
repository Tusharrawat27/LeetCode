class Solution {
public:

    bool allZero(vector<int> &counter) {
        for(int &i : counter) {
            if(i!=0) {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int k = p.length();
        vector<int>ans;

        vector<int> counter(26,0);
        for(int i=0; i<k; i++) {
            char ch = p[i];
            counter[ch - 'a']++;
        }

        int i=0, j=0;
        while(j<n) {
            counter[s[j] - 'a']--;
            if(j-i+1 == k) {
                if(allZero(counter)) {
                    ans.push_back((i));
                }

                counter[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};