class MyQueue {
public:
     stack<int> s1,s2;
    /** Initialize your data structure here. */
    MyQueue() {
       while(!s1.empty()){
           s1.pop();
       }
        while(!s2.empty()) s2.pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!s1.empty()) s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(x);
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s2.empty()) return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
