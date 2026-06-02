#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for(int i=0;i<nums.size();i++){
        if(u.find(nums[i])!=u.end()) return 1;
        u.insert(nums[i]);
        }
        return 0;
    }
};
int main(){
    vector<int>v={1,2,3,1};
    Solution *s=new Solution();
    bool t=s->containsDuplicate(v);\
    cout<<t;
    return 0;
}