class Solution {
public:
    int minimumPushes(string word) {
        vector<int> f(26,0);
        int result = 0;

        for(char &ch : word) {
            f[ch - 'a']++;
        }

        sort(f.begin(), f.end(), greater<int>());

        for(int i=0; i<26; i++) {
            int freq = f[i];
            int presses  = i/8+1;
            result += freq * presses;
        }
        return result;
    }
};