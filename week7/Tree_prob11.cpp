class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0;i < size;i++){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)   q.push(curr->left);
                if(curr->right)     q.push(curr->right);
            }
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};