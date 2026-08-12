class Solution {
public:
    int kokoEat(vector<int>& arr, int k) {

        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int pile : arr) {
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= k) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};