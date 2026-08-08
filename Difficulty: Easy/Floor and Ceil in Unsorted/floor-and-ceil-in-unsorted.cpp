class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1;
        int ceil = -1;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i]<=x){
                floor = max(floor,arr[i]);
            }
            if(arr[i]>=x){
                if(ceil==-1){
                    ceil=arr[i];
                    
                }
                else{
                    ceil = min(ceil,arr[i]);
                }
            }
        }
        return{floor,ceil};
    }
};