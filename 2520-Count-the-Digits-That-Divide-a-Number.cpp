class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int N = num;
        while(N>0){
            int digit = N %10;
            if(num%digit==0){
                ++count;
            }
            N = N /10;
        }
        return count;
    }
};