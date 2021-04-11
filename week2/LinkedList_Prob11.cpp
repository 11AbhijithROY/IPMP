ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;
        
        ListNode *curr = head;
        ListNode *prev, *nxt;
        prev = NULL;
        nxt = NULL;
        int count = 0;
        while(curr != NULL && count < k) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }
        if(nxt != NULL)
            head->next = reverseKGroup(nxt, k);
        return prev;
    }
};