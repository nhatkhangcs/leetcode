class Solution {
public:
    bool isPalindrome(int x) {
              string s = to_string(x);
              for(int i=0,j=(s.size())-1;i<(s.size())/2;i++)
              { 
                if(s[i]!=s[j-i])
                return false;
                 
                 
              }
              
    return true;
    }
};