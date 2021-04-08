class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *evenStart, *oddStart, *evenEnd, *oddEnd;
        Node *curr = head;
        while(curr != NULL){
            int num = curr->data;
            if(num%2 == 0){
                if(evenStart == NULL){
                    evenStart = curr;
                    evenEnd = evenStart;
                }
                else {
                    evenEnd->next = curr;
                    evenEnd = evenEnd->next;
                }
            }
            else {
                if(oddStart == NULL){
                    oddStart = curr;
                    oddEnd = oddStart;
                }
                else {
                    oddEnd->next = curr;
                    oddEnd = oddEnd->next;
                }
            }
            curr = curr->next;
        }
        if(oddStart == NULL || evenStart == NULL)
            return NULL;
        evenEnd->next = oddStart;
        oddStart->next = NULL;
        head = evenStart;
        return head;
    }
};