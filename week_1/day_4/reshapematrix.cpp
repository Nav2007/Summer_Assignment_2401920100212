#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size(),col=mat[0].size();
        if(row*col!=r*c)return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        int y=0,x=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=mat[y][x];
                if(x==col-1){
                x=0;
                y++;
                }
                else x++;
            }

        }
        return ans;
    }
};