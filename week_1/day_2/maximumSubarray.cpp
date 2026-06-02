#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
int main(){
    Solution *s=new Solution();
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    int ans=s->maxSubArray(v);
    cout<<ans;
    return 0;
}