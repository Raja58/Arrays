// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        29 Dec 2021
//  @Detail  :        Next Permutation (LeetCode)
//  ============================
//  -->

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), a = -1, b;
        for(int i = n - 2; i >= 0; i--)
            if(nums[i] < nums[i + 1])
            {
                a = i;
                break;
            }
        
        if(a != -1)
        {
            for(int i = n - 1; i > a; i--)
                if(nums[i] > nums[a])
                {
                    b = i;
                    break;
                }
            swap(nums[a], nums[b]);
        }
        reverse(nums.begin() + a + 1, nums.end());
    }
};
