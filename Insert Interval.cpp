// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        23 Nov 2021
//  @Detail  :        Insert Interval (LeetCode)
//  ============================
//  -->

class Solution {
public:
    
    vector<vector<int>> merge(int idx, vector<vector<int>> &intervals, vector<vector<int>> result)
    {
        for(int i = idx; i < intervals.size(); i++)
            if(result.back()[1] < intervals[i][0])
                result.push_back(intervals[i]);
            else if(result.back()[1] < intervals[i][1])
                result.back()[1] = intervals[i][1];
        return result;
    }
    
    vector<vector<int>> insert(vector<vector<int>> intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        for(int i = 0; i < intervals.size(); i++)
        {
            if(intervals[i][1] < newInterval[0])
                result.push_back(intervals[i]);
            else
            {
                if(intervals[i][0] <= newInterval[0])
                {
                    result.push_back(intervals[i]);
                    intervals[i] = newInterval;
                }
                else
                {
                    result.push_back(newInterval);
                }
                return merge(i, intervals, result);
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
