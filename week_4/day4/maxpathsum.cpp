#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxi=INT_MIN;
    int fun(TreeNode* p){
        if(p==NULL)return 0;
        int ls=fun(p->left);
        int rs=fun(p->right);
        maxi=max(maxi,p->val+ls+rs);
        if(p->val+ls<0&&p->val+rs<0)return 0;
        return p->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        fun(root);
        return maxi;
    }
};