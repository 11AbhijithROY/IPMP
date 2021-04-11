ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)    return NULL;
        if(n == 0) return head;
        ListNode *fast = head;
        ListNode *slow = head;
        while(n != 0){
            fast = fast->next;
            n--;
        }
        if(fast == NULL)
            return head->next;
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }