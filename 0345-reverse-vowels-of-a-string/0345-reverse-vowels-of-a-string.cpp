class Solution {
public:
    bool isvowel(char &ch)
    {
        if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'
         || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return 1;
        } else{
            return 0;
        }
    }
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0, j = n-1;
        while(i<j)
        {
            if(!isvowel(s[i]))
            {
                i++;
            }
            else if (!isvowel(s[j])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};