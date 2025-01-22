class Solution {
public:
    int pivotInteger(int n) {
        
        for(int i=1;i<=n;i++){
            int countleft=0;
            int countright=0;
            for(int j=1;j<=i;j++){
                countleft+=j;
            }
            for(int k=i;k<=n;k++){
                countright+=k;
            }
            if(countleft==countright){
                return i;
            }
        }
        return -1;
    }
};