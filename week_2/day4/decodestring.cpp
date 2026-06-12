#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<int>nst;
        stack<string>sst;
        int i=0;
        while(i<s.size()){
            if(s[i]>='0'&&s[i]<='9'){
                int sum=0;
                while(s[i]>='0'&&s[i]<='9'){
                    sum=sum*10+(s[i]-'0');
                    i++;
                }
                nst.push(sum);
            }
            else if(s[i]=='['){
                sst.push("[");
                i++;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                string str;
                while(s[i]>='a'&&s[i]<='z'){
                    str.push_back(s[i]);
                    i++;
                }
                sst.push(str);
            }
            else if(s[i]==']'){
                string str="";
                while(!sst.empty()&&sst.top()!="["){
                    str=sst.top()+str;
                    sst.pop();
                }
                sst.pop();
                int no=nst.top();
                nst.pop();
                string temp=str;
                str="";
                for(int j=0;j<no;j++){
                    str=str+temp;
                }
                sst.push(str);
                i++;
            }
        }
        string str="";
        while(!sst.empty()){
            str=sst.top()+str;
            sst.pop();
        }
        return str;
    }
};