class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) 
            return root;
        TreeNode* root1 = invertTree(root->left);
        TreeNode* root2 = invertTree(root->right);
        root->left = root2;
        root->right = root1;
        return root;
    }
};