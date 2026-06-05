#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string newstr;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z')newstr.push_back(s[i]+32);
            else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) newstr.push_back(s[i]);
        }
        int l=0,r=newstr.size()-1;
        bool flag=1;
        while(l<r){
            if(newstr[l]!=newstr[r]) {
                flag=0;
                break;
            }
            l++;
            r--;
        }
        if(flag==0) return false;
        else return true;
    }
};
