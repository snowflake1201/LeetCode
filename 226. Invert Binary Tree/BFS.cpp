/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        if(root == nullptr) return 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            for(int i = 0; i < n; i++) {
                TreeNode *first = q.front();
                q.pop();
                if(first->left) q.push(first->left);
                if(first->right) q.push(first->right);   
                TreeNode *tmp = first->left;
                first->left = first->right;
                first->right = tmp;   
            }
        }
        return root;
    }
};
