#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
            right++;
        }
    }
};
int main(){
    vector<int>nums={0,1,0,3,12};
    Solution *s=new Solution();
    s->moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}