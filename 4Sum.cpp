// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        29 Dec 2021
//  @Detail  :        4Sum (GeeksforGeeks)
//  ============================
//  -->

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 3; i++)
        {
            for(int j = i + 1; j < n - 2; j++)
            {
                long long poten = nums[i] + nums[j], l = j + 1, r = n - 1;
                while(l < r)
                {
                    if(1ll * nums[l] + nums[r] + poten == target)
                    {
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;    r--;
                        while(l < n && nums[l] == nums[l - 1])
                            l++;
                        while(r > j && nums[r] == nums[r + 1])
                            r--;
                    }
                    else if(1ll * nums[l] + nums[r] + poten < target)
                        l++;
                    else
                        r--;
                }
                while(j < n - 2 && nums[j + 1] == nums[j])
                    j++;
            }
            while(i < n - 3 && nums[i + 1] == nums[i])    
                i++;
        }
        return result;
    }
};
