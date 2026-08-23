class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int left = 0;
        int right = rows*columns -1;
        int mid = 0;
        int row = 0;
        int col = 0;

        while(left<=right){
          mid = left+(right-left)/2;
          row = mid/columns;
          col = mid%columns;
         if(matrix[row][col] == target){
            return true;
         }else if(matrix[row][col] < target){
            left = mid+1;
         }else{
            right = mid-1;
         }
        }
        return false;
    }
};
