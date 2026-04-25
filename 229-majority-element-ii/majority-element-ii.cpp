class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = 0 , count1 = 0;
        int el2 = 1 , count2 = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==el1){
                count1++;
            }
            else if(nums[i]==el2){
                count2++;
            }
            else if (count1==0){
                el1 = nums[i];
                count1 = 1;
            }
            else if (count2==0){
                el2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int count3=0, count4=0;
        for(int i = 0 ; i<n ;i++){
            if(nums[i]==el1) count3++;
            else if(nums[i]==el2) count4++;
        }
        vector<int>ans;
        if(count3>n/3) ans.push_back(el1);
        if(count4>n/3) ans.push_back(el2);

        return ans;
    }
    
};
                
            