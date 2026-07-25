class Solution {
public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {

        unordered_map<int, int> mp;
        vector<pair<int, int>> ans;

        // Store frequency of every element of arr2
        for (int x : arr2) {
            mp[x]++;
        }

        // Traverse arr1
        for (int x : arr1) {

            int need = target - x;

            // If required number exists in arr2
            if (mp.find(need) != mp.end()) {

                // Add the pair as many times as it appears
                for (int i = 0; i < mp[need]; i++) {
                    ans.push_back({x, need});
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};