class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0) return 0;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int longest = 1;
        int lastSmaller = INT_MIN;
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]-1==lastSmaller){
                count+=1;
                lastSmaller = arr[i];
            }
            else if(lastSmaller!=arr[i]){
                count = 1;
                lastSmaller = arr[i];
            }
            else{
                (arr[i]==lastSmaller);
                continue;
            }
            longest = max(longest,count);
        
        }
        return longest;
    }
};