int identicalTrees(node* a, node* b) 
{ 
    if (a == NULL && b == NULL) 
        return 1; 
    if (a != NULL && b != NULL) 
    { 
        return
        ( 
            a->data == b->data && 
            identicalTrees(a->left, b->left) && 
            identicalTrees(a->right, b->right) 
        ); 
    } 
    return 0; 
} 