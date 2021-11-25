// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        25 Nov 2021
//  @Detail  :        Continuous Subarray Sum (LeetCode)
//  ============================
//  -->

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cache;
        cache[0] = -1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum % k == 0 && i >= 1)
                return true;
            if(cache.find(sum % k) != cache.end() && i - cache[sum % k] >= 2)
                return true;
            if(cache.find(sum % k) == cache.end())  //very very important
                cache[sum % k] = i;
        }
        return false;
    }
};
