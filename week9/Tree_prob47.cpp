class Solution {
public:
    bool find(TreeNode *root, TreeNode *toFind) {
	if(!root) return false;
	if(root != toFind) {
		return find(root->left, toFind) || find(root->right, toFind);
	}
	else {
		return root;
	}
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if(!root) return nullptr;
	if(find(root->left, p)) {
		if(find(root->right, q)) {
			return root;
		}
		else if(find(root->left, q)){
			return lowestCommonAncestor(root->left, p, q);
		}
		else {
			return root;
		}
	}
	else if(find(root->right, p)){
		if(find(root->left, q)) {
			return root;
		}
		else if(find(root->right, q)){
			return lowestCommonAncestor(root->right, p, q);
		}
		else {
			return root;
		}
	}
	else {
		return p;
	}
}
};