class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        int candidate = 0, count = 0;

        // Step 1: Find candidate
        for(int num : arr) {
            if(count == 0) {
                candidate = num;
            }

            if(num == candidate) count++;
            else count--;
        }

        // Step 2: Verify
        count = 0;
        for(int num : arr) {
            if(num == candidate) count++;
        }

        if(count > arr.size()/2) return candidate;
        return -1;
    }
};