class Solution {
public:
    vector<string> generateParenthesis(int n) {
        queue<string> q;
        vector<string> res;
        q.push("");
        for(int i=0;i<n;i++) {
            int size = q.size();
            for(int j=0;j<size;j++) {
                string tmp = q.front();
                q.pop(); 
                q.push(tmp+"(");
                if(i<=n/2&&i>0)q.push(tmp+")");
            }
            
        }
        
        while(!q.empty()){
            string tmp = q.front();
            stack<char> s;
            for(char c : tmp) {
                s.push(c);
            }
            while(!s.empty()) {
                if(s.top()=='(') {
                    tmp+=')';
                }else{
                    tmp+='(';
                }
                s.pop();
            }
            res.push_back(tmp); 
            q.pop();
           
        }
         return res;
        
        
    }
};