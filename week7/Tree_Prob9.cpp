class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            Node* start = q.front();
            q.pop();
            if(start->left)
                    q.push(start->left);
            if(start->right)
                    q.push(start->right);
            start->next = NULL;
            s--;
            while(s>0){
                Node* temp = q.front();
                q.pop();
                temp->next = NULL;
                start->next = temp;
                start = temp;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                --s;
            }
        }
        return root;
    }
};