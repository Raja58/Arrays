// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        03 Dec 2021
//  @Detail  :        Reverse Integer (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x)
        {
            int pop = x % 10;
            x /= 10;
            if(result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7))
                return 0;
            if(result < INT_MIN / 10 || (result == INT_MIN / 10 && pop < -8))
                return 0;
            result *= 10;
            result += pop;
        }
        return result;
    }
};
