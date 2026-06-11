#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int> lps(s.size());
        lps[0]=0;
        int i=1,len=0;
        int n=s.size();
        while(i<s.size()){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0) len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps[n-1]>0&&(n%(n-lps[n-1])==0);
    }
};