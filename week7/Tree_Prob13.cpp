class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>qu;
        int v=0;
        if(root->val%2==0)
        {
            return false;
        }
        qu.push(root);
        while(!qu.empty())
        {
            int prev1 = INT_MIN;
            int prev2 = INT_MAX;
            int n=qu.size();
            while(n!=0)
            {
                if(qu.front()->left!=0 && v%2==0)
                {
                    if(qu.front()->left->val%2!=0)
                    {
                        return false;
                    }
                    qu.push(qu.front()->left);
                }
                if(qu.front()->left!=0 && v%2!=0)
                {
                    if(qu.front()->left->val%2==0)
                    {
                        return false;
                    }
                    qu.push(qu.front()->left);
                }
                if(qu.front()->right!=0 && v%2==0)
                {
                    if(qu.front()->right->val%2!=0)
                    {
                        return false;
                    }
                    qu.push(qu.front()->right);
                }
                if(qu.front()->right!=0 && v%2!=0)
                {
                    if(qu.front()->right->val%2==0)
                    {
                        return false;
                    }
                    qu.push(qu.front()->right);
                }
                n--;
                if(v%2==0)
                {
                    if(qu.front()->val > prev1)
                    {
                        prev1=qu.front()->val;
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(v%2!=0)
                {
                    if(qu.front()->val < prev2)
                    {
                        prev2=qu.front()->val;
                    }
                    else
                    {
                        return false;
                    }
                    
                }
                qu.pop();
            }
            v++;
        }
        return true;
    }
};