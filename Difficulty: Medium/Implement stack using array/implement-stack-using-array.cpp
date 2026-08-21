class myStack {

    int* arr;
    int size;
    int top;

public:

    myStack(int n) {
        arr = new int[n];
        size = n;
        top = -1;
    }

    bool isEmpty() {
        if(top == -1)
            return true;
        else
            return false;
    }

    bool isFull() {
        if(top == size - 1)
            return true;
        else
            return false;
    }

    void push(int x) {
        if(top == size - 1) {
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if(top == -1) {
            return;
        }

        top--;
    }

    int peek() {
        if(top == -1) {
            return -1;
        }

        return arr[top];
    }
};