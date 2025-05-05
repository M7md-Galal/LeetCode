public class Solution {
/*
  Idea:
     Given an array of integers and a target value
     Return the indices where the target appears *after sorting* the array in non-decreasing order
 
  Edge Cases:
     target does not exist in the array → return empty list
     all elements in nums are equal to target → return all indices
     nums has only one element → check if it equals target
     target occurs multiple times but scattered → after sorting they become contiguous
 
  Approach:
     Sort the array nums in non-decreasing order
     Create an empty list ans to store indices
     Loop over the sorted array:
          if nums[i] == target → add index i to ans
     Return ans list
 */
    public IList<int> TargetIndices(int[] nums, int target) {
        List<int> ans = new List<int>();
        Array.Sort(nums);
        for(int i=0;i<nums.Length;i++)
            if(nums[i]==target) ans.Add(i);
        return ans;
    }
}
