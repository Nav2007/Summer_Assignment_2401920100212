#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool foo(TreeNode*l,TreeNode*r){
        if(l==NULL&&r==NULL) return true;
        if(l==NULL||r==NULL) return false;
        if(l->val!=r->val) return false;
        return foo(l->left,r->right)&&foo(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        bool b=foo(root->left,root->right);
        return b;
    }
};