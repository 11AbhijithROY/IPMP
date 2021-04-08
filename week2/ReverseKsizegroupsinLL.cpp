class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(!head)
            return NULL;
        
        node *curr = head;
        node *prev, *nxt;
        prev = NULL;
        nxt = NULL;
        int count = 0;
        while(curr != NULL && count < k) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            nxt = curr;
            count++;
        }
        if(nxt != NULL)
            return reverse(nxt, k);
        return prev;
    }
};