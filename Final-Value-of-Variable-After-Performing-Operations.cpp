class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ctr=0;
        for(string& op : operations){
            ctr += (op[1] == '+') ? 1 : -1;
        }
        return ctr;
    }
};