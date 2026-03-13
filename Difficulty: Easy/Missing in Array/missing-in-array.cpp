class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size();
        long long sum = 0;
        long long total = (n+1)*(n+2)/2;
        for(int i = 0; i<n ; i++){
             sum = sum + arr[i];
        }
        return total-sum;
    }   
};  