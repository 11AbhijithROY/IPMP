int getMaxWidth(node* root)
{
    int maxWidth = 0;
    int width;
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++) {
        width = getWidth(root, i);
        if (width > maxWidth)
            maxWidth = width;
    }
    return maxWidth;
}
  

int getWidth(node* root, int level)
{
    if (root == NULL)
        return 0;
    if (level == 1)
        return 1;
    else if (level > 1)
        return getWidth(root->left, level - 1)
               + getWidth(root->right, level - 1);
}
  


int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        return (lHeight > rHeight) ? (lHeight + 1)
                                   : (rHeight + 1);
    }
}