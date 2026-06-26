#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* fun(vector<int>&pre,vector<int>&in,unordered_map<int,int>&map,int pl,int pr,int il,int ir){
        if(pl>pr||il>pr)return NULL;
        TreeNode* p=new TreeNode(pre[pl]);
        int ind=map[pre[pl]];
        int size=ind-il;
        p->left=fun(pre,in,map,pl+1,pl+size,il,ind-1);
        p->right=fun(pre,in,map,pl+size+1,pr,ind+1,ir);
        return p;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        int n=preorder.size();
        TreeNode*p=fun(preorder,inorder,map,0,n-1,0,n-1);
        return p;
    }
};