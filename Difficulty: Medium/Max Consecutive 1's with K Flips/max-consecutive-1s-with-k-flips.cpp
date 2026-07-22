class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int zerocount = 0 ;
        int left = 0;
        int ans = 0;
        int n = arr.size();
        for(int right = 0 ; right < n ; right++){
            if(arr[right]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(arr[left]==0){
                    zerocount--;
                   
                }
                left++; 
               
            }
            ans = max(ans,right-left+1);
            
        }
        
            
        return ans;
    }
};
