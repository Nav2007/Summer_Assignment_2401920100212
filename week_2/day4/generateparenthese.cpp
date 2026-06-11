#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void addingPar(vector<string>&v,string str,int n,int m){
        if(n==0&&m==0){
            v.push_back(str);
            return;
        }
        if(m>0)addingPar(v,str+")",n,m-1);
        if(n>0) addingPar(v,str+"(",n-1,m+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        addingPar(v,"",n,0);
        return v;
    }
};