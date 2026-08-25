class SpecialStack {
    stack<int> st;
    stack<int> minSt;
  public:
    SpecialStack() {
       
        // Define Stack
    }

    void push(int x) {
        st.push(x);
        
        if(minSt.empty()){
            minSt.push(x);
        }
        else{
            minSt.push(min(x,minSt.top()));
        }
        // Add an element to the top of Stack
    }

    void pop() {
        if(st.empty()){
            return ;
        }
        else{
            st.pop();
            minSt.pop();
        }
        // Remove the top element from the Stack
    }

    int peek() {
        if(st.empty()){
            return -1;
        }
        else{
            return st.top();
        }
        // Returns top element of the Stack
    }

    bool isEmpty() {
        return st.empty();
        // Check if stack is empty
    }

    int getMin() {
        if(minSt.empty()){
            return -1;
        }
        else{
            return minSt.top();
        }
        // Finds minimum element of Stack
    }
};