#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return 1;
        int i=0,c,len=0,k=0,store;
        if(chars[chars.size()-1]!=chars[chars.size()-2]){
            store=chars[chars.size()-1];
            len=1;
        }
        while(i<chars.size()-1){
            c=1;
            while(i<chars.size()-1&&chars[i]==chars[i+1]){
                c++;i++;
            }
            chars[k]=chars[i];len++;k++;
            vector<char>v;
            if(c>1){
            while(c>0){
                v.push_back(c%10+'0');
                c=c/10;
            }
            len+=v.size();
            for(int j=v.size()-1;j>=0;j--){
                chars[k]=v[j];
                k++;
            }
            }
            i++;
        }
            if(k<chars.size()&&chars[chars.size()-1]!=chars[chars.size()-2])chars[k]=store;
        return len;
    }
};