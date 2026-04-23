class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int>row;
        long long val = 1;
        row.push_back(1);
        for(int col = 1 ; col < n ; col++){
            val = val*(n-col);
            val = val/col;
            row.push_back(val);
        }
        return row;
    }
};