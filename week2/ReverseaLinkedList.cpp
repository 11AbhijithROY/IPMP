 struct Node* reverseList(struct Node *head)
    {
        // code here
        Node *curr = head, *prev = NULL, *next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        // return head of reversed list
    }
//using stack
struct Node* reverseList(struct Node *head)
    {
        // code here
        stack<Node> s;
        Node *temp = head;
        while(temp->next != NULL) {
            s.push(temp);
            temp = temp->next;
        }
        head = temp;
        while(!s.empty()){
            temp->next = s.top();
            s.pop();
            temp = temp->next;
        }
        temp->next = NULL;
        // return head of reversed list
    }