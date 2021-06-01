class Solution {
public:
    void modifyBSTUtil(TreeNode* root, int* sum){
        if(root == NULL)    return;
        modifyBSTUtil(root->right, sum);
        *sum = *sum + root->val;
        root->val = *sum;
        modifyBSTUtil(root->left, sum);
    }
    void modifyBST(TreeNode* root){
        int sum = 0;
        modifyBSTUtil(root, &sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        modifyBST(root);
        return root;
    }
};