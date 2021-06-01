class Solution {
public:
    int find(TreeNode* root, int k, int &ans){
        if(root == NULL)    return 0;
        int cnt = find(root->left, k, ans);
        cnt++;
        if(cnt == k){
            ans = root->val;
        }
        if(cnt <= k)
            cnt += find(root->right, k - cnt, ans);
        return cnt;
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        find(root, k ,ans);
        return ans;
    }
};