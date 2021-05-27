TreeNode*p;
    void list_from_node(TreeNode*root,int cur_dep,int depth,vector<int>&vec)
    {
        if(root==NULL)
        {
            return ;
        }
        if(cur_dep==depth)
        {
            vec.push_back(root->val);
            return ;
        }
        list_from_node(root->left,cur_dep+1,depth,vec);
        list_from_node(root->right,cur_dep+1,depth,vec);
        return ;
    }
    void list_out_all_nodes(TreeNode*root,TreeNode*target,int depth,int k,vector<int>&vec)
    {
      if(root==NULL)
      {
          return ;
      }
        if(depth>k)
        {
            return ;
        }
        if(root==target)
        {
            list_from_node(target,depth,k,vec);
            return ;    
        }
        else if(root->left==target)
        {
              list_from_node(target,depth,k,vec);
              root->left=NULL;
              list_out_all_nodes(p,root,depth+1,k,vec);
             
              return ;
        }
        else if(root->right==target)
        {
            list_from_node(target,depth,k,vec);
            root->right=NULL;
            list_out_all_nodes(p,root,1+depth,k,vec);
            
            return ;
        }
        
        list_out_all_nodes(root->left,target,depth,k,vec);
        list_out_all_nodes(root->right,target,depth,k,vec);
        
        return ;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        p=root;
        vector<int>ans;
        list_out_all_nodes(root,target,0,k,ans);
      
        return ans;
    }