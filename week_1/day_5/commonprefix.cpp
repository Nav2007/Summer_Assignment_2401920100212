#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int pc=strs[0].size();
        int c;
        for(int i=1;i<strs.size();i++){
            c=0;
            for(int j=0;j<pc;j++){
                if(strs[0][j]==strs[i][j]){
                    c++;
                }
                else break;
            }
            if(i==1) pc=c;
            else if(c<pc)pc=c;
        }
        string str;
        for(int i=0;i<pc;i++){
            str.push_back(strs[0][i]);
        }
        return str;
    }
};