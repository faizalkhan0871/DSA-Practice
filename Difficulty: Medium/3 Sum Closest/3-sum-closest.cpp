class Solution {
public:
    int closest3Sum(vector<int> &arr, int target) {

        int n = arr.size();

        sort(arr.begin(), arr.end());

        int closestSum = arr[0] + arr[1] + arr[2];

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = arr[i] + arr[left] + arr[right];

                // Better answer mila
                if (abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }
                // Tie case (GFG)
                else if (abs(sum - target) == abs(closestSum - target)
                         && sum > closestSum) {
                    closestSum = sum;
                }

                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    return sum;
                }
            }
        }

        return closestSum;
    }
};