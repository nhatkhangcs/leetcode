class Solution {
public:
    int romanCharToInt(char c) {
        switch (c) {
            case 'I': return 1; break;
            case 'V': return 5; break;
            case 'X': return 10; break;
            case 'L': return 50; break;
            case 'C': return 100; break;
            case 'D': return 500; break;
            case 'M': return 1000; break;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i < s.size() - 1 && romanCharToInt(s[i]) < romanCharToInt(s[i + 1])) {
                res -= romanCharToInt(s[i]);
            } else {
                res += romanCharToInt(s[i]);
            }
        }
        return res;
    }
};