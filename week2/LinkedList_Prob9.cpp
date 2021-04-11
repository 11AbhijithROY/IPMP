void push(Node **temp, int data){
    Node *newNode = (struct Node*)malloc(
        sizeof(struct Node));
    newNode->data = data;
    newNode->next = *temp;
    *temp = newNode;
}
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *result = NULL;
    Node **temp = &result;
    while(head1 && head2) {
        if(head1->data == head2->data){
            push((temp), head1->data);
            temp = &((*temp)->next);
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data > head2->data)
            head1 = head1->next;
        else
            head2 = head2->next;
    }
    return result;
}