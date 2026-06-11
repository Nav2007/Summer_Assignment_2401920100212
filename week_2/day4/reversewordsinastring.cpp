#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(i<s.size()){
            int j=i;
            while(j<s.size()&&s[j]!=' ')j++;
            int sp=j;
            j--;
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i=sp+1;
        }
        return s;
    }
};