class Solution {
  public:
    int romanToInteger(string &s) {
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        // code here
        
        for(int i = 0 ; i < n-1 ; i++){
            int current = mp[s[i]];
            int next = mp[s[i+1]];
            if(current<next){
                ans = ans-current;
            }
            else{
                ans = ans+current;
            }
        }
        ans += mp[s[n - 1]];
        
        return ans;
    }
};

