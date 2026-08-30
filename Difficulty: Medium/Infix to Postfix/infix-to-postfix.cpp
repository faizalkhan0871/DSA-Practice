class Solution {
public:
    string infixToPostfix(string& s) {

        stack<char> st;
        string ans = "";

        for(int i = 0; i < s.length(); i++) {

            // 1. Operand
            if(isalnum(s[i])) {
                ans += s[i];
            }

            // 2. Opening bracket
            else if(s[i] == '(') {
                st.push(s[i]);
            }

            // 3. Closing bracket
            else if(s[i] == ')') {

                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }

                st.pop(); // remove '('
            }

            // 4. Operator
            else {

                while(!st.empty() &&
                      st.top() != '(' &&
                      (precedence(st.top()) > precedence(s[i]) ||
                      (precedence(st.top()) == precedence(s[i]) && s[i] != '^'))) {

                    ans += st.top();
                    st.pop();
                }

                st.push(s[i]);
            }
        }

        // 5. Empty the remaining stack
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }

    int precedence(char c) {

        if(c == '^')
            return 3;

        if(c == '*' || c == '/')
            return 2;

        if(c == '+' || c == '-')
            return 1;

        return 0;
    }
};