// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        23 Nov 2021
//  @Detail  :        Subarray Product Less Than K (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1, cnt = 0, startIdx = 0;
        for(int i = 0; i < n; i++)
        {
            prod *= nums[i];
            while(startIdx <= i && prod >= k)
                prod /= nums[startIdx++];
            cnt += i - startIdx + 1;
        }
        return cnt;
    }
};
