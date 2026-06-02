#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum,maxsum;
        double ans;
        sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxsum=sum;
        int l=0,r=k;
        while(r<nums.size()){
            sum-=nums[l];
            sum+=nums[r];
            maxsum=max(maxsum,sum);
            r++;
            l++;
        }
        ans=(double)maxsum/k;
        return ans;
    }
};
int main(){
    int k=4;
    double ans;
    vector<int>v={1,12,-5,-6,50,3};
    Solution *s=new Solution();
    ans=s->findMaxAverage(v,k);
    cout<<ans;
    return 0;
}