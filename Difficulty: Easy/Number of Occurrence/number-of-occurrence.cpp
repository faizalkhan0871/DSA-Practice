class Solution {
public:
    int countFreq(vector<int>& arr, int target) {

        int n = arr.size();

        // Find first occurrence
        int first = -1;

        int low = 0;
        int high = n - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Target doesn't exist
        if(first == -1) {
            return 0;
        }

        // Find last occurrence
        int last = -1;

        low = 0;
        high = n - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last - first + 1;
    }
};