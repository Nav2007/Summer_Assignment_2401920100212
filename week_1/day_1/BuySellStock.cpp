#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l,r;
        l=0,r=0;
        int diff,maxdiff;
        maxdiff=0,diff=0;
        while(r<prices.size()){
            diff=prices[r]-prices[l];
            maxdiff=max(maxdiff,diff);
            while(l<r&&diff<0){
                l++;
                diff=prices[r]-prices[l];
                maxdiff=max(maxdiff,diff);
            }
            r++;
        }
        return maxdiff;
    }
};
int main(){
    vector<int> v={7,1,5,3,6,4};
    Solution *s=new Solution();
    int ans=s->maxProfit(v);
    cout<<ans;
    return 0;
}