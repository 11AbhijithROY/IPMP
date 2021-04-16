void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        Node *curr = head, t;
        int count;
        while(curr){
            for(count = 1;count < M && t != NULL;count++){
                curr = curr->next;
            }
            if(curr == NULL){
                return NULL;
            }
            t = curr->next;
            for(count = 1; count <= N && t!=NULL;count++){
                Node *temp = t;
                t = t->next;
                free(temp);
            }
            curr->next = t;
            curr = t;
        }
    }