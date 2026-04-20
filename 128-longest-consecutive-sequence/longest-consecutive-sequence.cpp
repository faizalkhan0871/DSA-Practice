class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int longest = 1;
        int count = 0 ;
        int lastSmaller = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]-1== lastSmaller){
                count+=1;
                lastSmaller = nums[i];
            }
            else if(lastSmaller!=nums[i]){
                count = 1;
                lastSmaller = nums[i];

            }
            else{
                nums[i]==lastSmaller;
                continue;
            }
            longest = max(longest,count);
        }
        return longest;
    }
};