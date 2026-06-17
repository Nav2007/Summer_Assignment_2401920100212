#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>>st;
    void push(int value) {
        if(st.empty()||value<st.top().second)st.push({value,value});
        else st.push({value,st.top().second});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};