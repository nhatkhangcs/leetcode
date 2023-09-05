class Solution {
public:
    int lengthOfLastWord(string s) {
        int t = s.length() - 1;
        while(t >= 0 && s[t] == ' ') t--;
        int count = 0;
        while(t >= 0 && s[t] != ' '){
            t--;
            count++;
        }

        return count;
    }
};