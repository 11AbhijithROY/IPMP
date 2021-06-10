TreeNode* dfs(TreeNode* root, int limit, int sumSoFar) {
        if (root == nullptr) {
            return nullptr;
        }
        if (!root -> left && !root -> right) {
            if (sumSoFar + root -> val < limit) {
                return nullptr;
            } 
            return root;
        }
        root -> left = dfs(root -> left, limit, sumSoFar + root -> val);
        root -> right = dfs(root -> right, limit, sumSoFar + root -> val);
        if (!root -> left && !root -> right) {
            return nullptr;
        }
        return root;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        return dfs(root, limit, 0);
    }