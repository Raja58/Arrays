// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        25 Nov 2021
//  @Detail  :        Count Primes (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int countPrimes(int n) {
        if(n < 2)
            return false;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        
        for(int i = 2; i * i < n; i++)
        {
            if(!prime[i])
                continue;
            for(int j = i * i; j < n; j += i)
                prime[j] = false;
        }
        
        int result = 0;
        for(bool x : prime)
            if(x)
                result++;
        return result;
    }
};
