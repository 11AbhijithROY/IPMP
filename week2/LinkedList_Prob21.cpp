class Solution {
public:
    struct compare {
        bool operator() (const ListNode *l1, const ListNode *l2){
            return (l1->val > l2->val);
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      priority_queue<ListNode*, vector<ListNode*>, compare> pq;
      for(auto ListHead : lists){
          if(ListHead)  pq.push(ListHead);
      }
        ListNode *res = new ListNode (0);
        ListNode *curr = res;
      while(!pq.empty()){
          ListNode *top = pq.top();
          pq.pop();
          if(top->next)
            pq.push(top->next);
          curr->next = top;
          curr = curr->next;
      }
    return res->next;
    }
};