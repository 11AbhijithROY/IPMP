class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *curr = head;
        int count = 1;
        while(count < k && curr != NULL){
            count++;
            curr = curr->next;
        }
        if(curr == NULL){
            return NULL;
        }
        Node *kthNode = curr;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = head;
        head = kthNode->next;
        kthNode->next = NULL;
        return head;
    }
};

//Method 2 - converting it to a circular LL
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = head;
        head = curr;
        for(int i = 0;i <= k - 1;i++) {
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};