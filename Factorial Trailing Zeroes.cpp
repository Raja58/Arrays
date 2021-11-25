// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        25 Nov 2021
//  @Detail  :        Factorial Trailing Zeroes (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        for(int i = 5; n >= i; i *= 5)
            cnt += n / i;
        return cnt;
    }
};
