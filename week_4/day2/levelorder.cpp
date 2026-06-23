#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* n=q.front();
                q.pop();
                if(n->left!=NULL) q.push(n->left);
                if(n->right!=NULL) q.push(n->right);
                level.push_back(n->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};