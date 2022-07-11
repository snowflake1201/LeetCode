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
    int maxDepth(TreeNode* root){
        int depth = 0;
        if(root == NULL) return 0;
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            int temp = q.size();
            depth++;
            for(int i = 0; i < temp; i++){
                TreeNode* first = q.front();
                q.pop();
                
                if(first->left != NULL) q.push(first->left);
                if(first->right != NULL) q.push(first->right);
            }
        }
        return depth;
    }
};
