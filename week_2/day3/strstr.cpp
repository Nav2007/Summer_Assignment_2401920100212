#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> picons(string str)
{
    vector<int> pi;
    int len=0,i=1;
    pi.push_back(0);
    while(i<str.size())
    {
        if(str[len]==str[i])
        {
            len++;
            pi.push_back(len);
            i++;
        }
        else
        {
            if(len>0)
            {
                len=pi[len-1];
            }
            else
            {
                pi.push_back(len);
                i++;
            }
        }
    }
    return pi;
}
    int strStr(string haystack, string needle) {
        int i=0,j=0;
    vector<int> pi=picons(needle);
    while(i<haystack.size())
    {
        if(haystack[i]==needle[j])
        {
            i++;
            j++;
        
        if(j==needle.size())
        {
            return i-j;
        }
    }
    else{
        if(j!=0)
        {
            j=pi[j-1];
        }
        else{
            i++;
        }
    }
    }
    return -1;
    }
};