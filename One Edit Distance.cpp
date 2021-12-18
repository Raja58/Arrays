// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        18 Dec 2021
//  @Detail  :        One Edit Distance (LeetCode)
//  ============================
//  -->

bool isOneEditDistance(string &s, string &t) {
        if(s == t)
            return false;
        int m = s.size(), n = t.size();
        if(abs(m - n) >= 2)
            return false;

        if(m == n)
        {
            bool edited = false;
            for(int i = 0; i < m; i++)
            {
                if(s[i] != t[i])
                {
                    if(!edited)
                        edited = true;
                    else
                        return false;
                }
            }
            return true;
        }
        
        if(m < n)
        {
            swap(s, t);
            swap(m, n);
        }

        bool skipped = false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i - skipped])
            {
                if(!skipped)
                    skipped = true;
                else
                    return false;
            }
        }
        return true;
    }
