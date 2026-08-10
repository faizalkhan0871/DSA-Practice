class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        
        int n = arr.size();
        int m = arr[0].size();
        int row = 0;
        int col = m-1;
        while(row<n && col>=0){
            if(arr[row][col]<x){
                row++;
            }
            else if(arr[row][col]>x){
                col--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};