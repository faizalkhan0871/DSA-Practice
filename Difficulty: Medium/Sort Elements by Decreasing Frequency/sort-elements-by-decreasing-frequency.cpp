class Solution {
  public:
    vector<int> sortByFreq(vector<int>& arr) {

        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for (int x : arr) {
            freq[x]++;
        }

        // Step 2: Sort according to frequency
        sort(arr.begin(), arr.end(), [&](int a, int b) {

            // Higher frequency first
            if (freq[a] != freq[b]) {
                return freq[a] > freq[b];
            }

            // Same frequency -> smaller element first
            return a < b;
        });

        return arr;
    }
};