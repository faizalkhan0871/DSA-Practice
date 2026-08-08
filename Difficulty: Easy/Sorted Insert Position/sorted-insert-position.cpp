class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int n = arr.size();
        // code here
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>=k){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
        }
        return low;
    }
};