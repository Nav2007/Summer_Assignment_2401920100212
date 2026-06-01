#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int> ansin;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                ansin.push_back(m[target-nums[i]]);
                ansin.push_back(i);
            }
            m[nums[i]]=i;
        }
        return ansin;
    }
};

int main(){
    Solution* s=new Solution();
    vector<int> v={2,7,11,15};
    int target=9;
    vector<int> ans=s->twoSum(v,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}