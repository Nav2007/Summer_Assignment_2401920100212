#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if(root==NULL)return false;
        if(root->left==NULL&&root->right==NULL){
            if(target-root->val==0)return true;
            else return false;
        }
        bool b1=hasPathSum(root->left,target-root->val);
        bool b2=hasPathSum(root->right,target-root->val);
        return b1||b2;
    }
};