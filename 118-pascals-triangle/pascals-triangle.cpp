class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>results;
        for(int i = 0 ; i < numRows ; i++){
            vector<int>row;
            long long ans = 1;
            row.push_back(1);
            for(int col = 1 ; col<=i ; col++){
                ans = ans *(i-col+1);
                ans = ans/col;
                row.push_back(ans);
                
            }
            results.push_back(row);
        }
        return results;
    }
};

        
            