// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        30 Dec 2021
//  @Detail  :        Trapping Rain Water (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax = 0, rightMax = 0, result = 0;
        int left = 0, right = height.size() - 1;
        while(left < right)
        {
            if(height[left] <= height[right])
            {
                if(height[left] >= leftMax)
                    leftMax = height[left];
                else
                    result += leftMax - height[left];
                left++;
            }
            else
            {
                if(height[right] >= rightMax)
                    rightMax = height[right];
                else
                    result += rightMax - height[right];
                right--;
            }
        }
        return result;
    }
};
