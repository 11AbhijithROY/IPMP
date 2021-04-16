struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        stack<int> s1, s2;
        int carry = 0;
        Node *result = NULL;
        while(first!= NULL){
            s1.push(first->data);
            first = first->next
        }
        while(second != NULL){
            s2.push(second->data);
            second = second->next;
        }
        while(!s1.empty() || !s2.empty()){
            int a = 0, b = 0;
            if(!s1.empty()){
                a = s1.top();s1.pop();
            }
            if(!s2.empty()){
                b = s2.top();s2.pop();
            }
            int total = a + b + carry;
            Node *temp = new Node;
            temp->data = total%10;
            carry = total/10;
            if(result == NULL){
                result = temp
            }
            else {
                temp->next = result;
                result = temp;
            }
        }
        if(carry != 0){
            Node *temp = new Node;
            temp->data = carry;
            temp->next = result;
            result = temp;
        }
        return result;
    }