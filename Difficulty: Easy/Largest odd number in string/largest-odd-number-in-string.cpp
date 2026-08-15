class Solution {
  public:
    string maxOdd(string s) {
        for(int i = s.length()-1;i>=0;i--){
            if(s[i]%2!=0){
                return s.substr(0,i+1);
            }
        }
        return "";
        // code here
        
    }
};