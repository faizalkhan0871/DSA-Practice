class Solution {
public:
    void makeZeros(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> temp = mat;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (temp[i][j] == 0) {

                    int sum = 0;

                    if (i > 0)
                        sum += temp[i - 1][j];

                    if (i < n - 1)
                        sum += temp[i + 1][j];

                    if (j > 0)
                        sum += temp[i][j - 1];

                    if (j < m - 1)
                        sum += temp[i][j + 1];

                    mat[i][j] = sum;

                    if (i > 0)
                        mat[i - 1][j] = 0;

                    if (i < n - 1)
                        mat[i + 1][j] = 0;

                    if (j > 0)
                        mat[i][j - 1] = 0;

                    if (j < m - 1)
                        mat[i][j + 1] = 0;
                }
            }
        }
    }
};