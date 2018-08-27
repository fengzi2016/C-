/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return constructTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
}
TreeNode* constructTree(vector<int>& preorder, int prestart, int preend, vector<int>& inorder,int instart, int inend) {
    if(prestart>preend||instart>inend) {
        return NULL;
    }
    TreeNode* root = new TreeNode(preorder[prestart]);
    for(int i=instart;i<=inend;i++) {
        if(preorder[prestart]==inorder[i]) {
            root->left=constructTree(preorder,prestart+1,prestart+i-instart,inorder,instart,i-1);
            root->right=constructTree(preorder,prestart+i-instart+1,preend,inorder,i+1,inend);
        }
    }
    return root;
}