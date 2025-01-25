class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long  rev = 0;
        long long ans = x;
        while(ans!=0){
            int digit = ans % 10;
            rev = rev * 10 + digit;
            ans /= 10;
        }
        return (rev == x);
    }
};