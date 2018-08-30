class Solution {
public:
    vector<string> letterCombinations(string digits) {
       vector<string> base = {
           "","","abc","def","ghi","jkl","mno","pqrs",
        "tuv","wxyz"
       };
       vector<string> res;
       queue<string> q;
       if(!digits.length()) return res;
       q.push(base[0]);
       for(int i=0;i<digits.length();i++) {
           int length = q.size();
           for(int j=0;j<length;j++) {
                string tmp = q.front();
                q.pop();
               for(char c: base[digits[i]-'0']) {
                  q.push(tmp+c);
                }
           }    
       }
       
       while(!q.empty()) {
           res.push_back(q.front());
           q.pop();
       }
        return res;
    }
 

};