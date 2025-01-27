class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> p_q;
        for(int i=0;i<k;i++) p_q.push(nums[i]);
        for(int i=k;i<nums.size();i++) {
            if(p_q.top()<nums[i]) {
                p_q.pop();
                p_q.push(nums[i]);
            }
        }
        return p_q.top();
    }
};