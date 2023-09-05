class Solution {
public:
    double average(vector<int>& salary) {
        int min = *min_element(salary.begin(), salary.end());
        int max = *max_element(salary.begin(), salary.end());

        int sum = 0;
        int count = 0;
        for(auto &i : salary){
            if(i != min && i != max){
                sum += i;
                count++;
            }
        }

        return sum *1.0 / count;
    }
};