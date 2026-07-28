class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        long long len = 1;

        while(n>0) {
            int digit = n % 10;
            if(digit != 0) {
                x = digit * len + x;
                len = len *10;
                sum = sum + digit;
            }
            n = n/10;
        }

        return x * sum;
    }
};