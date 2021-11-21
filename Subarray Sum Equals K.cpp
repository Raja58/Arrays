// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        21 Nov 2021
//  @Detail  :        Subarray Sum Equals K (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cache;
        cache[0] = 1;
        int sum = 0, result = 0;
        for(int &x : nums)
        {
            sum += x;
            result += cache[sum - k];
            cache[sum]++;
        }
        return result;
    }
};
