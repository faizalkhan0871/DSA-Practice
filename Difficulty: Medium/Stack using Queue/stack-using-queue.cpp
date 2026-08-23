class myStack {
    queue<int> q;
    // it have already a built in function and we don't want to create new array and top element

  public:

    void push(int x) {
        int n = q.size();
        q.push(x);
       
        for(int i = 0 ; i < n  ; i++){
          q.push(q.front());
          q.pop();
            
        }

        // Inserts an element x at the top of the stack
    }
        
    void pop() {
        if(q.empty()){
            return;
        }
        q.pop();
        
        
        // Removes an element from the top of the stack
    }

    int top() {
        if(q.empty()){
            return -1;
        }
        return q.front();
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return q.size();
        
        
        // Returns the current size of the stack
    }
};
