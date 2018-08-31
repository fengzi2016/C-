class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        queue<vector<int>> q;
        
        for(int n : nums) {
            vector<int> tmp;
            tmp.push_back(n);
            q.push(tmp);
        }
        vector<vector<int>> permute;
        
        for(int i=0;i<nums.size()-1;i++) {
            int size = q.size();
            for(int j=0;j<size;j++) {
                vector<int> cur = q.front();
                for(int n : nums) {
                    if(!In(cur,n)) {
                       cur.push_back(n);
                       q.push(cur);
                        cur=q.front();
                      
                    }    
                   
                }
                q.pop();
                
                
            }
        }
        while(!q.empty()) {
            permute.push_back(q.front());
            q.pop();
        }
        return permute;
    }
    bool In(vector<int> num,int i) {
        for(int n : num) {
            if(n==i) return true;
        }
        return false;
    }
};