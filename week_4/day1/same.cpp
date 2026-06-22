#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;
        if(p==NULL||q==NULL) return false;
        if(p->val!=q->val) return false;
       bool b1= isSameTree(p->left,q->left);
        bool b2=isSameTree(p->right,q->right);
        return b1&&b2;
    }
};