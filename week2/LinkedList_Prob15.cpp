Node* SortedMerge(Node* a, Node* b) 
{ 
    Node* result = NULL; 
    if (a == NULL) 
        return(b); 
    else if (b == NULL) 
        return(a); 
    if (a->data <= b->data) 
    { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else
    { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return(result); 
} 