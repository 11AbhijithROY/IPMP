int idx=0;
    unordered_map<int,int> m;
    TreeNode* construct(vector<int> preorder,vector<int> inorder,int l,int r)
    {
        if(l>r)
            return nullptr;
        TreeNode* res=new TreeNode(preorder[idx++]);
        if(l==r)
            return res;
        int mid=m[res->val];
        res->left=construct(preorder,inorder,l,mid-1);
        res->right=construct(preorder,inorder,mid+1,r);
        return res;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        int n=preorder.size();
        for(int i=0;i<n;i++)
        {
            inorder.push_back(preorder[i]);
        }
        sort(inorder.begin(),inorder.end());
        for(int i=0;i<n;i++)
            m[inorder[i]]=i;
        TreeNode* root=construct(preorder,inorder,0,n-1);
        return root;
    }