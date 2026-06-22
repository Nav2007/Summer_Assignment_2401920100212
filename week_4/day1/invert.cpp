#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void foo(TreeNode *n){
        if(n==NULL){
            return;
        }
        swap(n->left,n->right);
        foo(n->left);
        foo(n->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        
        foo(root);
        return root;
    }
};