// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        19 Dec 2021
//  @Detail  :        Increasing Triplet Subsequence (LeetCode)
//  ============================
//  -->

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstMin = INT_MAX, secondMin = INT_MAX;
        for(int &x : nums)
            if(x <= firstMin)
                firstMin = x;
            else if(x <= secondMin)
                secondMin = x;
            else
                return true;
        return false;
    }
};
