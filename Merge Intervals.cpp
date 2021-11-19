// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        19 Nov 2021
//  @Detail  :        Merge Intervals (LeetCode)
//  ============================
//  -->

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), [](vector<int> &x, vector<int> &y) {return x[0] < y[0];});
        vector<vector<int>> result{a.front()};
        for(int i = 1; i < a.size(); i++)
        {
            if(a[i][0] > result.back()[1])
                result.push_back(a[i]);
            else if(a[i][1] > result.back()[1])
                result.back()[1] = a[i][1];
        }
        return result;
    }
};
