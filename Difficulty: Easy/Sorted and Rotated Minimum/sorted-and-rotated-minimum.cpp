class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int low = 0 ;
        int high = n-1;
       
        while(low<high){
            int mid  = low +(high-low)/2;
            if(arr[high]<arr[mid]){
               low=mid+1;
            }
            else{
                high=mid;
            }
            
        }
        return arr[low];
    }
};