// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        29 Dec 2021
//  @Detail  :        Find the Duplicate Number (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = nums[0], j  = nums[0];
        do{
            i = nums[i];
            j = nums[nums[j]];
        }while(i != j);
        
        j = nums[0];
        while(i != j)
        {
            i = nums[i];
            j = nums[j];
        }
        return i;
    }
};
