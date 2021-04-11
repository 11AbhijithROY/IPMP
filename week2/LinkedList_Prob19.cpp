void alternatingSplitList(struct Node* head) 
{
    //Your code here
    Node *temp = head;
    Node *aref = NULL;
    Node *bref = NULL;
    while(temp != NULL) {
        aref->data = temp->data;
        aref = aref->next;
        temp = temp->next;
        bref->data = temp->data;
        bref = bref->next;
        temp = temp->next;
    }
    a = aref;
    b = bref;
}