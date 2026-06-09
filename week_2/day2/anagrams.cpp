#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int l=0,r=0;
        vector<int>ans;
        if(p.size()>s.size()) return ans;
        map<char,int>mstd;
        map<char,int>m;
        for(int i=0;i<p.size();i++){
            mstd[p[i]]++;
        }
        while(r<s.size()){
            if(mstd.find(s[r])==mstd.end()){
                r++;
                l=r;
                m={};
            }
            else{
                if(m[s[r]]<mstd[s[r]]){
                    m[s[r]]++;
                    if(m==mstd) ans.push_back(l);
                    r++;
                }
                else{
                    while(l<r&&m[s[r]]>=mstd[s[r]]){
                        m[s[l]]--;
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};