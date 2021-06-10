class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
         if (!root) return root;
  if (low <= root->val && root->val <= high) {
    root->left = trimBST(root->left, low, high);
    root->right = trimBST(root->right, low, high);
    return root;
  } else if (root->val < low) {
    return trimBST(root->right, low, high);
  } else {  // root->val > high
    return trimBST(root->left, low, high);
  }
    }
};