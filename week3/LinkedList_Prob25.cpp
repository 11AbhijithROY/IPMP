Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    int len = 0;
    Node *temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    if(K > len){
        return NULL;
    }
    if(2*K - 1 == len){
        return NULL;
    }
    Node *ptr = head;
    Node *prev = NULL;
    for(int i = 1;i < k;i++){
        prev = ptr;
        ptr = ptr->next;
    }
    Node *ptr1 = head;
    Node *prev1 = NULL;
    for(int i = 1;i < n - k + 1;i++){
        prev1 = ptr1;
        ptr1 = ptr1->next;
    }
    if(ptr)
        prev->next = y;
    if(ptr1)
        prev1->next = ptr;
    Node *tmp = ptr->next;
    ptr->next = ptr1->next;
    y->next = tmp;
    if (k == 1)
        *head_ref = ptr1;
    if (k == n)
        *head_ref = ptr;
}