class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0)
        {
            int r=x%10;
            x=x/10;
            rev=rev*10+r;
        }
        return rev;
        
    }
};