//Print reverse of LL without actually reversing it using recursion
void printReverse(Node* head) 
{ 
    if (head == NULL) 
        return; 
    printReverse(head->next); 
    cout << head->data << " "; 
} 