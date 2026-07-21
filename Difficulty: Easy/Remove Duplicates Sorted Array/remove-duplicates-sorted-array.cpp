class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0 ;
        for(int j = 1 ; j<n ; j++){
            if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
            }
        }
        vector<int>ans;
        for(int k = 0 ; k<=i ; k++){
            ans.push_back(arr[k]);
        }
        
       return ans; 
    }
    
};