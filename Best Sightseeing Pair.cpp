// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        12 Dec 2021
//  @Detail  :        Best Sightseeing Pair (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int preIdx = 0, result = INT_MIN;
        for(int i = 1; i < values.size(); i++)
        {
            if(values[i] - i + values[preIdx] + preIdx > result)
                result = values[i] - i + values[preIdx] + preIdx;
            if(values[preIdx] + preIdx < values[i] + i)
                preIdx = i;
        }
        return result;
    }
};
