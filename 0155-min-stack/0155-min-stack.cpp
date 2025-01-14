class MinStack {
    stack<int> st;
    stack<int> minSt;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
         if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (!st.empty() && st.top() == minSt.top()) {
            minSt.pop();
        }
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        int top = st.top();
        return top;
    }
    
    int getMin() {
        int mini = minSt.top();
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */