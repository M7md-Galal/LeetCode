public class Solution {
    public int FindGCD(int[] nums) {
        Array.Sort(nums);
        int maxx=nums[nums.Length-1];
        int minn=nums[0];
        int ans=0;
        for(int i=1;i<=maxx;i++)
        {
            if(minn%i==0 && maxx%i==0)
                ans = i;
        }
        return ans;
    }
}