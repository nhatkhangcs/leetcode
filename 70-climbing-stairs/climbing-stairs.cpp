class Solution {
public:
int climbStairs(int n) {
        int a[n+1];
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=n;i++){
            int sum=0;
            sum=a[i-1];
            sum+=a[i-2];
            a[i]=sum;
        }
        return a[n];
    }
};