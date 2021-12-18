// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        18 Dec 2021
//  @Detail  :        Meeting Rooms II (LeetCode)
//  ============================
//  -->

int minMeetingRooms(vector<Interval> &inter) {
        int n = inter.size();
        vector<int> arrival(n), depart(n);
        for(int i = 0; i < inter.size(); i++)
        {
            arrival[i] = inter[i].start;
            depart[i] = inter[i].end;
        }
        sort(arrival.begin(), arrival.end());
        sort(depart.begin(), depart.end());
        int maxi = 1;
        int arrIdx = 0, depIdx = 0;
        while(arrIdx < n)
        {
            while(arrIdx < n && arrival[arrIdx] < depart[depIdx])
                arrIdx++;
            maxi = max(arrIdx - depIdx, maxi);
            while(depIdx < n && depart[depIdx] <= arrival[arrIdx])
                depIdx++;
        }
        return maxi;
    }
