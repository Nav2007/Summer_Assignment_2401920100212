#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            string str=tokens[i];
            if(str.size()>1||str[0]>='0'&&str[0]<='9'){
                int sign=1,j=0;
                if(str[0]=='-'){sign=-1;j=1;}
                int s=0;
                while(j<str.size()&&str[j]>='0'&&str[j]<='9'){
                    s=s*10+(str[j]-'0');j++;
                }
                st.push(sign*s);
            }
            else{
                int a,b;
                if(str[0]=='+'){
                    int b=st.top();st.pop();
                    int a=st.top();st.pop();
                    st.push(a+b);
                }
                else if(str[0]=='-'){
                    int b=st.top();st.pop();
                    int a=st.top();st.pop();
                    st.push(a-b);
                }
                else if(str[0]=='*'){
                    int b=st.top();st.pop();
                    int a=st.top();st.pop();
                    st.push(a*b);
                }
                else{
                    int b=st.top();st.pop();
                    int a=st.top();st.pop();
                    st.push(a/b);
                }
            }
        }
        return st.top();
    }
};