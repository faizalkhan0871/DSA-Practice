class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int ans =-1;
        
        int low = 0;
        int high = n-1;
        int mid = low+(high-low)/2;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==k){
                ans=mid;
                high=mid-1;
                
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};