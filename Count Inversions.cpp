// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        29 Dec 2021
//  @Detail  :        Count Inversions (GeeksforGeeks)
//  ============================
//  -->

    int merge(int start, int mid, int end, int *a)
    {
        int cnt = 0;
        int i = start, j = mid + 1, k = 0;
        int temp[end - start + 1];
        while(i <= mid && j <= end)
        {
            if(a[i] <= a[j])
                temp[k++] = a[i++];
            else
            {
                cnt += mid - i + 1;
                temp[k++] = a[j++];
            }
        }
        while(i <= mid)
            temp[k++] = a[i++];
        while(j <= end)
            temp[k++] = a[j++];
        for(int i = start; i <= end; i++)
            a[i] = temp[i - start];
        return cnt;
    }
    
    int mergeSort(int start, int end, int *a)
    {
        if(start >= end)
            return 0;
        int mid = start + ((end - start) >> 1);
        int cnt = mergeSort(start, mid, a);
        cnt += mergeSort(mid + 1, end, a);
        cnt += merge(start, mid, end, a);
        return cnt;
    }
    
    int inversionCount(int *a, int &n)
    {
        return mergeSort(0, n - 1, a);
    }