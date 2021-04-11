void deleteAlt(struct Node *head){
    // Code here
    Node *now = head->next;
    Node *prev = head;
    while(prev && now){
        prev->next = now->next;
        now = NULL;
        prev = prev->next;
        if(prev != NULL){
            now = prev->next;
        }
    }
}