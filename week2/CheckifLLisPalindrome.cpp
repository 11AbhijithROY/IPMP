bool isPalindrome(Node *head)
    {
        //Your code here
        Node *temp = head;
        stack <int> s;
        while(temp != NULL) {
           s.push(temp->data);
           temp = temp->next;
        }
        while(head != NULL) {
            int i = s.top();
            s.pop();
            if(i != head->data) {
                return false;
            }
            head = head->next;
        }
        return true;