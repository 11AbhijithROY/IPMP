Node* NthNode(Node* root, int n) {
    int bitIndex = 0;
    while (true) {
        if (1 << (bitIndex + 1) > n) break;
        bitIndex++;
    }
    bitIndex--;
    for (; bitIndex >= 0; bitIndex--) {
        int mask = (1 << bitIndex);
        if (n & mask)
            root = root->right;
        else
            root = root->left;
    }
    return root;
}