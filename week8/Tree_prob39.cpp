class Solution {
public:
    void inorder(vector<int>& elems, TreeNode* root){
        if(!root) return;
        inorder(elems, root->left);
        elems.push_back(root->val);
        inorder(elems, root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> elems;
        inorder(elems, root);
        int l = 0, r = elems.size() - 1;
        while(l < r){
            int sum = elems[l] + elems[r];
            if(sum > k) r--;
            else if(sum < k) l++;
            else 
                return true;
        }
        return false;
    }
};