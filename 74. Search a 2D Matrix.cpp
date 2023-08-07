class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
int n = matrix.size(),
m = matrix[0].size(),
row = 0, col = m - 1;
while (row <= n-1 && col >= 0) {
int cur = matrix[row][col];
if (cur == target) return true;
if (target > cur) row++;
else col--;
}
return false;
}
};
