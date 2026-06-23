#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty())
        {
            vector<int>level;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* t=q.front();
                q.pop();
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                level.push_back(t->val);
            }
            ans.push_back(level);
        }
        if(ans.size()==1) return ans;
        for(int i=1;i<ans.size();i=i+2)
        {
            int j=0,k=ans[i].size()-1;
            while(j<k){
                swap(ans[i][j],ans[i][k]);
                j++;
                k--;
            }
        }
        return ans;
    }
};