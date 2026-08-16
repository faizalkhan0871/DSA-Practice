class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length()) return false;
        int count [26]={0};
        for(int i = 0 ; i< s1.length(); i++){
            count[s1[i]-'a']++;
        }
        for(int i = 0 ; i< s2.length();i++){
            count[s2[i]-'a']--;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};