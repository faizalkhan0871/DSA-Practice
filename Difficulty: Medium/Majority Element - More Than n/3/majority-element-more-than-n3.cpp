class Solution {
public:
    vector<int> findMajority(vector<int>& arr) {

        int el1 = 0, el2 = 0;
        int count1 = 0, count2 = 0;
        int n = arr.size();

        // Candidate Selection
        for(int i = 0; i < n; i++) {

            if(count1 == 0 && arr[i] != el2) {
                el1 = arr[i];
                count1 = 1;
            }
            else if(count2 == 0 && arr[i] != el1) {
                el2 = arr[i];
                count2 = 1;
            }
            else if(arr[i] == el1) {
                count1++;
            }
            else if(arr[i] == el2) {
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Verification
        int count3 = 0, count4 = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] == el1) count3++;
            if(arr[i] == el2) count4++;
        }

        vector<int> ans;

        if(count3 > n/3)
            ans.push_back(el1);

        if(el1 != el2 && count4 > n/3)
            ans.push_back(el2);

        sort(ans.begin(), ans.end());   // GFG generally expects sorted output

        return ans;
    }
};