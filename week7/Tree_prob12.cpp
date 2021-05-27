class Solution {
public:
    void calc(map<pair<int,int>,vector<int>>& m, TreeNode* &root, int i, int j){
        if(root == NULL)
            return;
        pair<int, int> p(j,i);
        m[p].push_back(root->val);
        calc(m,root->left,i+1,j-1);
        calc(m,root->right,i+1,j+1);
        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>,vector<int>> m;
        calc(m,root,0,0);
        vector<vector<int>> ans;
        map<int, vector<int>> temp;
        cout<<m.size();
        for(auto it: m){
            sort(it.second.begin(), it.second.end());
            for(auto ele: it.second){
                temp[it.first.first].push_back(ele);
            }
        }
        for(auto it:temp){
            ans.push_back(it.second);
        }
    return ans;        
    }
};