class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>results;
        for(int i = 0 ; i < numRows ; i++){
            vector<int>row;
            long long val = 1;
            row.push_back(1);
            for(int col = 1 ; col<=i ; col++){
                val = val *(i-col+1);
                val = val/col;
                row.push_back(val);
                
            }
            results.push_back(row);
        }
        return results;
    }
};

        
            