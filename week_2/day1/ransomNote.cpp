#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mr;
        map<char,int>mm;
        for(int i=0;i<ransomNote.size();i++){
            mr[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mm[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mm[ransomNote[i]]<mr[ransomNote[i]]){
                return false;
            }
        }
        return true;
    }
};