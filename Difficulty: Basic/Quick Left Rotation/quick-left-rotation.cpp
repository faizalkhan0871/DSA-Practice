class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        vector<int>temp(n);
        for(int  i =0 ; i<n ; i++ ){
            int newindex=(i-k+n)%n;
            temp[newindex]=arr[i];
        }
        arr=temp;
    }
    
};