#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0,r=0;
        if(s1.size()>s2.size()) return false;
        map<char,int>mstd;
        map<char,int>m;
        for(int i=0;i<s1.size();i++){
            mstd[s1[i]]++;
        }
        while(r<s2.size()){
            if(mstd.find(s2[r])==mstd.end()){
                r++;
                l=r;
                m={};
            }
            else{
                if(m[s2[r]]<mstd[s2[r]]){
                    m[s2[r]]++;
                    if(m==mstd) return true;
                    r++;
                }
                else{
                    while(l<r&&m[s2[r]]>=mstd[s2[r]]){
                        m[s2[l]]--;
                        l++;
                    }
                }
            }
        }
        return false;
    }
};