node * _kAltReverse(node *Node, int k, bool b) 
{ 
    if(Node == NULL) 
        return NULL; 
      
    int count = 1; 
    node *prev = NULL; 
    node *current = Node; 
    node *next; 
    while(current != NULL && count <= k) 
    { 
        next = current->next; 
      
       
        if(b == true) 
            current->next = prev; 
                  
        prev = current; 
        current = next; 
        count++; 
    } 
    if(b == true) 
    { 
        Node->next = _kAltReverse(current, k, !b); 
        return prev;         
    } 
    else
    { 
        prev->next = _kAltReverse(current, k, !b); 
        return Node;     
    } 
}