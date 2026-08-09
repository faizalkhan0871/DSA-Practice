class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int firstOccurence = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(arr[mid]==x){
                firstOccurence=mid;
                high=mid-1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        int lastOccurence = -1;
        low=0;
        high=n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(arr[mid]==x){
                lastOccurence=mid;
                low=mid+1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return{firstOccurence,lastOccurence};
    }
};
        