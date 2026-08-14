class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        
        int n = arr.size();
        if(arr[n-1]-arr[0]-(n-1)<k) return -1;
        int low = 0;
        int high= n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int missing = arr[mid]-arr[0]- mid;
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
          return arr[0]+low+k-1;
        // Code here
    }
    
};