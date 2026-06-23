#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validate(TreeNode*p,TreeNode*mini,TreeNode*maxi){
        if(p==NULL)return true;
        if(mini!=NULL&&p->val<=mini->val||maxi!=NULL&&p->val>=maxi->val)return false;
        return validate(p->left,mini,p)&&validate(p->right,p,maxi);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,NULL,NULL);
    }
};
