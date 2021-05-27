class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);//pushing root of the tree
        int c = 0;
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            for(auto i = 0;i < n;i++){
                TreeNode* tmp = q.front();
                temp.push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                q.pop();
            }
            c++;
            if(c%2 == 0){
                reverse(temp.begin(), temp.end());
            }
            res.push_back(temp);
        }
        return res;
    }
};