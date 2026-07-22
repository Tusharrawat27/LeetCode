class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int color1 = (start[0] + start[1]) % 2;
        int color2 = (target[0] + target[1]) % 2;

        if(color1 == color2) {
            return true;
        } else {
            return false;
        }
    }
};