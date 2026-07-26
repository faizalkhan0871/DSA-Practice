class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int el = 0;
        int n = arr.size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(count==0){
                el=arr[i];
                count = 1;
            }
            else if(arr[i]==el){
               count++; 
            }
            else{
                count--;
            }
                
            
        }
        int count1= 0 ;
        for(int i = 0 ; i < n ; i++){
            if(el==arr[i]){
                count1++;
            }
        }
        if(count1>n/2){
            return el;
        }
        return -1;
    }
};