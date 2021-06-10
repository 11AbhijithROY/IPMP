class Solution {
public:

    void flatten(TreeNode* root) {
        if(root==NULL||root->left==NULL && root->right==NULL)
		{
            return;
        }
        
        if(root->left!=NULL){
        flatten(root->left);
        
        TreeNode* temp1=root->right;
        root->right=root->left;
        root->left=NULL;
        
        TreeNode* temp2=root->right;
        while(temp2->right!=NULL)
		{
            temp2=temp2->right;
        }
        
        temp2->right=temp1;
    
        }
		
        flatten(root->right);    
        
		}
    
};