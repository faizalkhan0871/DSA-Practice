class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int prefix = 1;
        int sufix = 1;
        int n = arr.size();
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(prefix == 0) prefix=1;
            if(sufix==0) sufix=1;
            prefix=prefix*arr[i];
            sufix=sufix*arr[n-i-1];
            ans=max(ans,max(prefix,sufix));
        }
        return ans;
    }
};