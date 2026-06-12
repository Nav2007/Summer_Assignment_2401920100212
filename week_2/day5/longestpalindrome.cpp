#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=0,maxl=0,maxr=0;
        int st,ed;
        for(int i=0;i<s.size();i++){
            st=i,ed=i;
            while(st>=0&&ed<s.size()){
                if(s[st]==s[ed]){
                    if(maxlen<ed-st+1){
                        maxlen=ed-st+1;
                        maxl=st;
                        maxr=ed;
                    }
                }
                else break;
                st--;
                ed++;
            }
            st=i,ed=i+1;
            while(st>=0&&ed<s.size()){
                if(s[st]==s[ed]){
                    if(maxlen<ed-st+1){
                        maxlen=ed-st+1;
                        maxl=st;
                        maxr=ed;
                    }
                }
                else break;
                st--;
                ed++;
            }
        }
        string str;
        for(int i=maxl;i<=maxr;i++){
            str.push_back(s[i]);
        }
        return str;
    }
};