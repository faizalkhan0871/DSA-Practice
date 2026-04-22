class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i = 0; i < numRows; i++) {
            vector<int> row;
            long long val = 1;

            row.push_back(1); // first element always 1

            for(int col = 1; col <= i; col++) {
                val = val * (i - col + 1);
                val = val / col;
                row.push_back(val);
            }

            result.push_back(row);
        }

        return result;
    }
};
   