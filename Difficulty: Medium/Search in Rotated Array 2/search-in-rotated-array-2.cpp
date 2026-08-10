class Solution {
public:
    bool search(vector<int>& arr, int key) {

        int low = 0;
        int high = arr.size() - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Target mil gaya
            if(arr[mid] == key) {
                return true;
            }

            // Duplicate case
            if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
                low++;
                high--;
            }

            // Left half sorted
            else if(arr[low] <= arr[mid]) {

                // Target left sorted half me hai
                if(arr[low] <= key && key < arr[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            // Right half sorted
            else {

                // Target right sorted half me hai
                if(arr[mid] < key && key <= arr[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};