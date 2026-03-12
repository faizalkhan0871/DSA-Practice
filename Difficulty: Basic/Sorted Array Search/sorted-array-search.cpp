class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            
            int mid = (low+high)/2;
            if(arr[mid]==k) 
            return true;
            
            else if(arr[mid]>k) 
            high=mid-1;
            
            else(low = mid+1);
        }
        
        return false;
            
    }
};