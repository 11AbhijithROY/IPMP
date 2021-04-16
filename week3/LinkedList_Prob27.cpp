class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
     if(head==NULL || head->next==NULL || head->next->next==NULL)
         return head;
        ListNode* odd_head = head;
        ListNode* odd = head;
        ListNode* even_head = head->next;
        ListNode* even = head->next;
        
        while(even! = NULL && even->next != NULL)
        {
            odd->next = even->next;
            odd = even->next;
            
            even->next = odd->next;
            even = odd->next;
        }   
        odd->next = even_head;
        return odd_head;
    }
};