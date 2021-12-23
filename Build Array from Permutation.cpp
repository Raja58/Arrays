// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        23 Dec 2021
//  @Detail  :        Build Array from Permutation (LeetCode)
//  ============================
//  -->

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        for(int &x : nums)
            x *= n;
        for(int i = 0; i < n; i++)
            nums[i] += (nums[nums[i] / n] / n);
        for(int &x : nums)
            x %= n;
        return nums;
    }
};
