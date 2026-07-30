class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
    if(arr.size()==0) return 0;
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int count = 0;
    int largest = INT_MIN;
    int longest = 1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]-1==largest){
            count+=1;
            largest=arr[i];
        }
        else if(largest!=arr[i]){
            count =1;
            largest = arr[i];
        }
        else{
            arr[i]=largest;
            continue;
            
        }
        longest=max(longest,count);
    }
    return longest;
    }
};
       