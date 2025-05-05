class Solution {
        // Idea:
        //  You are given a permutation array nums where each element is in the range [0, nums.length - 1]
        //  You must return a new array such that: ans[i] = nums[nums[i]]
        
        // Edge Cases:
        //  nums has only 1 element (e.g. [0])
        //  nums is already in correct position (e.g. [0, 1, 2])
        //  nums is reverse ordered (e.g. [2, 1, 0])
        //  nums contains duplicate values (not applicable here, since it's a permutation by problem constraint)

        // Approach:
        //  Create a new array 'ans' of the same size as nums
        //  Loop over nums from index 0 to n-1
        //  For each index i, assign ans[i] = nums[nums[i]]
        //  Return the array 'ans'
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
