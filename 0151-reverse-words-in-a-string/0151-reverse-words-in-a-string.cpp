class Solution {
public:
    string reverseWords(string s) {
      int n = s.length();
      reverse(s.begin(), s.end());
      int i=0, l=0, r=0;
      while(i<n) {
        while(i<n && s[i] != ' ') {
            s[r] = s[i];
            i++; r++;
        }
        reverse(s.begin()+l, s.begin()+r);
        if(l<r) {
            s[r] = ' ';
            r++;
            l=r;
        }
        i++;
      }
      return s.substr(0,r-1);
    }
};