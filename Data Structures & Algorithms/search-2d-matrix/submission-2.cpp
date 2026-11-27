class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int l = 0;
        int r = rows*columns - 1;
        int row = 0;
        int col = 0;

        while(l<=r){
            int mid = l+(r-l)/2;
            row = mid/columns;
            col = mid%columns;
            if(matrix[row][col]==target)
               return true;
            else if(matrix[row][col] < target)
               l = mid+1;
            else
               r = mid-1;
        }
        return false;
    }
};
