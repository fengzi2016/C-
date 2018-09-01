class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        queue<vector<int> > q;
        queue<vector<int> > re;
        int baseSize = nums.size();
        for(int i=0;i<baseSize;i++) {
            vector<int> tmp;
            tmp.push_back(nums[i]);
            q.push(tmp);
        }
        re = q;
        vector<vector<int> > permute;
        
        for(int i=0;i<baseSize-1;i++) {
            int size = q.size();
            for(int j=0;j<size;j++) {
                vector<int> cur = q.front();
                int lastIndex = findLastIndex(cur,nums) > 0 ? findLastIndex(cur,nums) : 0 ;
                for(int k= lastIndex+1 ;k< baseSize;k++) {
                    if(!In(cur,nums[k]) ){
                    	
                       cur.push_back(nums[k]);
                       q.push(cur);
                       re.push(cur);
                       cur=q.front();
                      
                    }    
                   
                }
                q.pop();
                
                
            }
        }
        
        
        while(!re.empty()) {
        	
            permute.push_back(re.front());
            
            re.pop();
        }
        vector<int> empty;
        permute.push_back(empty);
        return permute;
    }
    bool In(vector<int> num,int i) {
        for(int n : num) {
            if(n==i) return true;
        }
        return false;
    }
    int findLastIndex(vector<int> cur, vector<int> base) {
        int target = cur[cur.size()-1];
        for(int i=0;i<base.size();i++) {
            if(base[i]==target) { return i;}
        }
        return -1;
    } 
};