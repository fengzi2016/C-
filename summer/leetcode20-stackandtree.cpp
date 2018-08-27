vector<int> inorderTraversal(TreeNode *root) {
    stack<TreeNode> s;
    TreeNode *p = root;
    vector<int> result;
    while(p || !s.empty()) {
        while(p) {
            s.push(p);
            p = p->left;
        } 
        if(!s.empty()) {
            p = s.top();
            result.push_back(p->val);
            s.pop();
            p =  p->right;
        }
    }
    return result;
}