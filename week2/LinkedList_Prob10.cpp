ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        bool duplicate = false;
        while(head->next && head->val == head->next->val){
            duplicate = true;
            head->next = head->next->next;
        }
        head->next = deleteDuplicates(head->next);
        return (duplicate ? head->next : head);
    }