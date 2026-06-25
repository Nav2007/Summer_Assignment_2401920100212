#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxi=0;
    int maxh(TreeNode*root){
        if(root==NULL)return 0;
        int l=maxh(root->left);
        int r=maxh(root->right);
        maxi=max(maxi,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int a=maxh(root);
        return maxi;
    }
};