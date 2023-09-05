class Solution {
public:
    int arraySign(vector<int>& nums) {
        int odd = 0;
        for (auto &i : nums){
            if (i == 0) return 0;
            if (i < 0) odd++;
        }

        if(odd % 2 == 1) return -1;
        return 1;
    }
};