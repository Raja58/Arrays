// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        11 Dec 2021
//  @Detail  :        ZigZag Traverse
//  ============================
//  -->

#include <vector>
using namespace std;

vector<int> zigzagTraverse(vector<vector<int>> arr) {
  int m = arr.size(), n = arr[0].size();
	int row = 0, col = 0;
	vector<int> result;
	bool down = true;
	while(row >= 0 && row < m && col >= 0 && col < n)
	{
		result.push_back(arr[row][col]);
		if(down)
		{
			if(col == 0 || row == m - 1)
			{
				down = false;
				if(row == m - 1)
					col += 1;
				else
					row += 1;
			}
			else
			{
				row++;
				col--;
			}
		}
		else
		{
			if(row == 0 || col == n - 1)
			{
				down = true;
				if(col == n - 1)
					row += 1;
				else
					col += 1;
			}
			else
			{
				row--;
				col++;
			}
		}
	}
  return result;
}
