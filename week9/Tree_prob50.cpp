TreeNode* sol(vector<int> &vec,int i,int j){
        if(i>j)return NULL;
        int mid=(i+j)/2;
        if(mid > j) return NULL;
        TreeNode* root=new TreeNode(vec[mid]);
        root->left=sol(vec,i,mid-1);
        root->right=sol(vec,mid+1,j);
        return root;
    }
    TreeNode* sortedArraytoBST(vector<int> vec) {
        return sol(vec,0,vec.size()-1);
        
    }
};