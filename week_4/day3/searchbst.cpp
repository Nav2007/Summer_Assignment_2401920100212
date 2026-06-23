#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *p=root;
        while(p!=NULL&&p->val!=val){
            if(val>p->val){
                p=p->right;
            }
            else{
                p=p->left;
            }
        }
        return p;
    }