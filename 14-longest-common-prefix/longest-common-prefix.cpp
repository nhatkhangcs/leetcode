class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {  // O(nm)
        if (strs.empty()) return "";
        int n = strs.size();
        string res = strs[0];
        for (int i = 1; i < n; ++i) {
            int j = 0;
            while (j < res.size() && j < strs[i].size() && res[j] == strs[i][j]) ++j;
            res = res.substr(0, j);
        }
        return res;
    }
};