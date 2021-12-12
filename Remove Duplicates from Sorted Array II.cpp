// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        12 Dec 2021
//  @Detail  :         Remove Duplicates from Sorted Array II (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = -1, start = 0, end = 0, n = nums.size();
        while(end < n)
        {
            while(end < n - 1 && nums[end] == nums[end + 1])
                end++;
            if(start == end)
                nums[++idx] = nums[start];
            else
            {
                nums[idx + 1] = nums[idx + 2] = nums[start];
                idx += 2;
            }
            start = end = end + 1;
        }
        return idx + 1;
    }
};
