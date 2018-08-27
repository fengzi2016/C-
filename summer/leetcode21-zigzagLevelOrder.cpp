vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    bool open = false;
    vector<vector<int>> result;
    if(root==NULL)return result;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        vector<int> row;
        for(int i=0;i<size;i++) {
            TreeNode *head = q.front();
            q.pop();
            row.push_back(head->val);
            if(head->left)q.push(head->left);
            if(head->right)q.push(head->right);

        }
        if(open)reverse(row.begin(),row.end());
        open=!open;
        result.push_back(row);
    }
    return result;
}