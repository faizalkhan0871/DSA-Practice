class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low= 0;
        int high =m;
        
        while(low<=high){
            int mid = low +(high-low)/2;
            long long power = 1;
            for(int i = 1 ; i <= n ;i++){
                power= power*mid;
            }
            if(power==m){
                return mid;
            }
            else if(power<m){
                
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};