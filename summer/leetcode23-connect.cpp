/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> q;
        if(root==NULL)return;
        q.push(root);
        while(!q.empty()) {
            TreeLinkNode *cur;
            int size = q.size();
            for(int i=0;i<size;i++) {
                cur = q.front();
                q.pop();
                if(i==size-1) {
                    cur->next = NULL;
                } else {
                     cur-> next = q.front();
                } 
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);

            } 
        }
    }
};