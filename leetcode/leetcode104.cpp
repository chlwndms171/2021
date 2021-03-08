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
    int maxDepth(TreeNode* root) {
        
        if (root == NULL)
            return 0;
        
        if (root->left == NULL && root->right == NULL)
            return 1;
        
        else {
            int sum = max(countDepth(root->left, 1) , countDepth(root->right, 1));
            return sum;
        }
        
        
    }
    int countDepth(TreeNode* root, int val) {
        
        if (root == NULL)
            return val;
        else 
            return max(countDepth(root->left, val+1), countDepth(root->right, val+1));
    }
};