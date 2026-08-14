class Solution {
public:
    int findPages(vector<int>& arr, int k) {
        int n = arr.size();

        // Har student ko at least ek book chahiye
        if (k > n) return -1;

        long long low = arr[0];
        long long high = 0;

        // low = maximum single book
        // high = total pages
        for (int i = 0; i < n; i++) {
            low = max(low, (long long)arr[i]);
            high += arr[i];
        }

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            int students = 1;
            long long pages = 0;

            for (int i = 0; i < n; i++) {
                if (pages + arr[i] <= mid) {
                    pages += arr[i];
                } 
                else {
                    students++;
                    pages = arr[i];
                }
            }

            if (students > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return (int)low;
    }
};