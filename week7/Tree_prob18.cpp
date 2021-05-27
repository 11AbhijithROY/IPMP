class Solution {
public:
    int height(TreeNode*root){
        
        if(root==NULL) return 0;
        return 1 + max(height(root->left),height(root->right));
        
    }
    int countNodes(TreeNode* root) {
    if(root==NULL) return 0;
    int h = height(root);
    queue<TreeNode*>q;
    q.push(root);
    int level=0;
    while(!q.empty()){
     int s = q.size();
     level++;
     if(level==h){
         break;
     }
     while(s--){
     auto p = q.front();
        q.pop();
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
      }   
    }
    return pow(2,h-1)-1 + q.size();
    }
};