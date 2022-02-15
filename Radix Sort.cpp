// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        15 Feb 2022
//  @Detail  :        Radix Sort
//  ============================
//  -->

#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr, int digit){
  int n = arr.size();
  vector<int> auxArr(n), digArr(10);
  
  for(int i = n - 1; i >= 0; i--){
    int digArrIdx = (arr[i] / (int)pow(10, digit)) % 10;
    digArr[digArrIdx]++;
  }
  
  for(int i = 1; i < 10; i++){
    digArr[i] += digArr[i - 1];
  }
  
  for(int i = n - 1; i >= 0; i--){
    int digArrIdx = (arr[i] / (int)pow(10, digit)) % 10;
    digArr[digArrIdx]--;
    auxArr[digArr[digArrIdx]] = arr[i];
  }
  
  for(int i = 0; i < n; i++){
    arr[i] = auxArr[i];
  }
}

void radixSort(vector<int> &arr){
  int maxElement = INT_MIN;
  for(int &x : arr)
    if(x > maxElement)
        maxElement = x;
  
  int digit = 0;
  while(maxElement / (int)(pow(10, digit)) > 0){
    countingSort(arr, digit);
    digit++;
  }
}

// To execute C++, please define "int main()"
int main() {
  vector<int> arr{124, 654, 345, 687, 6, 87, 234, 3, 12, 1, 99};
  radixSort(arr);
  for(int &x : arr)
    cout<<x<<" ";
  return 0;
}
