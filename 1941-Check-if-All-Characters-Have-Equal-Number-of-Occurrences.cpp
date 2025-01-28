class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq (26,0) ;
        unordered_set<int> us;
        for(char &ch : s)
            freq[ch - 'a']++;
        for(auto &a : freq){
            if(a != 0){
                us.insert(a);
            }
        }
        if(us.size() == 1)
            return true;
        return false;
    }
};