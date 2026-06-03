#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int k=0;
        int neg=0;
        while(neg<n&&nums[neg]<0) neg++;
        int pos=neg;
        neg--;
        while(neg>=0&&pos<n){
            if(abs(nums[neg])<=abs(nums[pos])){
                ans[k]=nums[neg]*nums[neg];
                k++;
                neg--;
            }
            else{
                ans[k]=nums[pos]*nums[pos];
                k++;
                pos++;
            }
        }
        while(neg>=0){
            ans[k]=nums[neg]*nums[neg];
            k++;
            neg--;
        }
        while(pos<n){
            ans[k]=nums[pos]*nums[pos];
            k++;
            pos++;
        }
        return ans;
    }
};
int main(){
    Solution *s=new Solution();
    vector<int>nums={-4,-1,0,3,10};
    vector<int> ans=s->sortedSquares(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}