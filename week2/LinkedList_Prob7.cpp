void removeLoop(Node *loop_Node, Node* head){
    {
        // code here
        Node *ptr1 = loop_Node;
        Node *ptr2 = loop_Node;
        int k = 0;
        while(ptr1->next != ptr2){
            k++;
            ptr1->next;
        }
        ptr1 = head;
        ptr2 = head;
        for(int i = 0;i < k;i++) {
            ptr2 = ptr2->next;
        }
        while(ptr2 != ptr1) {
            ptr1 ->= next;
            ptr2 ->= next;
        }
        while(ptr2->next != ptr2)
            ptr2 ->= next;
            
        ptr2->next = NULL;
        // just remove the loop without losing any nodes
    }
    int detectandRemoveLoop(Node* head) {
        Node *fast_ptr = head;
        Node *slow_ptr = head;
        while(fast_ptr && fast_ptr->next && slow_ptr) {
            slow_ptr = slow->next;
            fast_ptr = fast_ptr->next->next;
            if(fast_ptr == slow_ptr) {
                removeLoop(slow_ptr, head);
                return 1;
            }
        }
        return 0;
    }

//Using Hashing
void hashAndRemove(Node* head)
{
    unordered_map<Node*, int> node_map;
    Node* last = NULL;
    while (head != NULL) {
        if (node_map.find(head) == node_map.end()) {
            node_map[head]++;
            last = head;
            head = head->next;
        }
        else {
            last->next = NULL;
            break;
        }
    }
}