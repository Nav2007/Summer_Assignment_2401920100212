#include<bits/stdc++.h>
using namespace std;
class Codec {
public:

    void preorderSerialize(TreeNode* root, string& data) {
        if(root == nullptr) {
            data += "# ";
            return;
        }

        data += to_string(root->val) + " ";
        preorderSerialize(root->left, data);
        preorderSerialize(root->right, data);
    }

    string serialize(TreeNode* root) {
        string data = "";
        preorderSerialize(root, data);
        return data;
    }

    TreeNode* preorderDeserialize(stringstream& ss) {
        string val;
        ss >> val;

        if(val == "#") return nullptr;

        TreeNode* node = new TreeNode(stoi(val));
        node->left = preorderDeserialize(ss);
        node->right = preorderDeserialize(ss);

        return node;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);

        return preorderDeserialize(ss);
    }
};

