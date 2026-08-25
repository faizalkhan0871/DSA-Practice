class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char>st;
        for(int i = 0 ; i < s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                if(s[i]==')' && top!='(') return false;
                if(s[i]=='}' && top!='{') return false;
                if(s[i]==']' && top!='[') return false;
                
                st.pop();
            }
        }
        return st.empty();
        // code here
        
    }
};