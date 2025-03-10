class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            for(auto& word : words[i]){
                if(word == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};