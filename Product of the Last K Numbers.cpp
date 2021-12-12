// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        12 Dec 2021
//  @Detail  :        Product of the Last K Numbers (LeetCode)
//  ============================
//  -->

class ProductOfNumbers {
public:
    vector<int> arr;
    
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num == 0)
            arr.clear();
        else if(arr.empty())
            arr.push_back(num);
        else
            arr.push_back(arr.back() * num);
    }
    
    int getProduct(int k) {
        int n = arr.size();
        if(k > n)
            return 0;
        if(k == n)
            return arr.back();
        return arr[n - 1] / arr[n - k - 1];
    }
};
