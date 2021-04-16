void pairWiseSwap(struct node* head)
{
    if (head != NULL && head->next != NULL) {
        swap(head->data, head->next->data);
        pairWiseSwap(head->next->next);
    }
}