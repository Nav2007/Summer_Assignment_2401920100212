#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>st;
    stack<int>mainst;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!mainst.empty()){
            st.push(mainst.top());
            mainst.pop();
        }
        mainst.push(x);
        while(!st.empty()){
            mainst.push(st.top());
            st.pop();
        }
    }
    
    int pop() {
        int x=mainst.top();
        mainst.pop();
        return x;
    }
    
    int peek() {
        return mainst.top();
    }
    
    bool empty() {
        if(mainst.size()>0){
            return false;
        }
        return true;
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