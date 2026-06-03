#include<bits/stdc++.h>
using namespace std;\
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxcap=0;
        while(l<r){
            if(height[l]<=height[r]){
                maxcap=max(maxcap,height[l]*(r-l));
                l++;
            }
            else{
                maxcap=max(maxcap,height[r]*(r-l));
                r--;
            }
        }
        return maxcap;
    }
};
int main(){
    int ans;
    vector<int>arr={1,8,6,2,5,4,8,3,7};
    Solution *s=new Solution();
    ans=s->maxArea(arr);
    cout<<ans;
    return 0;
}