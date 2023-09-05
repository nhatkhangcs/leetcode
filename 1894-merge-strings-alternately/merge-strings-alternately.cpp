class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = 0;
        int b = 0;
        string res = "";
        while(a < word1.length() || b < word2.length()){
            if (a < word1.length()) res += word1[a];
            if (b < word2.length()) res += word2[b];
            a++;
            b++;
        }

        return res;
    }
};