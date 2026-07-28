class Solution {
public:
    void rearrange(vector<int> &arr) {

        vector<int> pos, neg;

        // Separate positive and negative numbers
        for (int x : arr) {
            if (x >= 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        int i = 0;
        int p = 0;
        int n = 0;

        // Arrange alternately
        while (p < pos.size() && n < neg.size()) {
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }

        // Put remaining positive numbers
        while (p < pos.size()) {
            arr[i++] = pos[p++];
        }

        // Put remaining negative numbers
        while (n < neg.size()) {
            arr[i++] = neg[n++];
        }
    }
};