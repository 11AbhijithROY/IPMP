class Solution {
public:
    int balance(TreeNode* root, int height, bool ans){
        if(!root)
            return 0;
        int l = 0, r = 0;
        if(root->left)
            l = balance_h(root->left, height, ans);
        if(root->right)
            r = balance_h(root->right, height, ans);
        if(abs(l - r) <= 1){
            ans = ans && true;   
        }
        else 
            ans = ans && false;
        return 1 + max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        balance_h(root, 0, ans);
        return ans;
    }
};