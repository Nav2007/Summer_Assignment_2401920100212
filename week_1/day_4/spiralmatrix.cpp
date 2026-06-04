#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int i,j,val1,val2,val3,val4;
        i=0,j=0;
        val1=n-1,val2=m-1,val3=0,val4=1;
        int elt=m*n;
        int count=0;
        bool flag=0;
        vector<int>ans;
        while(count<elt){
            while(j<=val1){
                ans.push_back(mat[i][j]);
                count++;
                if(count==elt){
                    flag=1;
                    break;
                }
                if(j==val1){
                    i++;
                    val1--;
                    break;
                }
                j++;
            }
            if(flag==1)break;
            while(i<=val2){
                ans.push_back(mat[i][j]);
                count++;
                if(count==elt){
                    flag=1;
                    break;
                }
                if(i==val2){
                    j--;
                    val2--;
                    break;
                }
                i++;
            }
            if(flag==1)break;
            while(j>=0){
                ans.push_back(mat[i][j]);
                count++;
                if(count==elt){
                    flag=1;
                    break;
                }
                if(j==val3){
                    i--;
                    val3++;
                    break;
                }
                j--;
            }
            if(flag==1)break;
            while(i>=val4){
                ans.push_back(mat[i][j]);
                count++;
                if(count==elt){
                    flag=1;
                    break;
                }
                if(i==val4){
                    j++;
                    val4++;
                    break;
                }
                i--;
            }
            if(flag==1)break;
        }
        return ans;
    }
};
int main(){
    Solution *s=new Solution();
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=s->spiralOrder(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}