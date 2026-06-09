#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxlen=0;
        unordered_set<char> u;
        while(r<s.size()){
            if(u.find(s[r])==u.end()){
                u.insert(s[r]);
            }
            else{
                while(l<r&&s[l]!=s[r]){
                    u.erase(s[l]);
                    l++;
                }
                l++;
            }
            r++;
            maxlen=max(maxlen,r-l);
        }
        return maxlen;
    }
};