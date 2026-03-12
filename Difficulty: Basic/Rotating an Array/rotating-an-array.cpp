// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d%n;
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            int newindex=(i-d+n)%n;
            temp[newindex]=arr[i];
        }
        arr=temp;
    }
};