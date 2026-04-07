// User function template for C++
class Solution {
  public:
    int res = 0;
    int search(int n, int arr[]){
        for(int i =0 ;i < n; i++){
            res ^= arr[i];
        }
        return res;
        // code
    }
};