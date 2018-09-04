class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int flag = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==target&&flag == 0) {
                flag = 1;
                res.push_back(i);
            }
            
            if(flag == 1 && nums[i] == target && i==nums.size()-1) {
                res.push_back(i);
            }
            if(flag == 1 && nums[i]!=target) {
                res.push_back(i-1);
                flag = 2;
            }
            
            
        }
        if(res.size()==1) res.push_back(res[0]);
        if(res.size()==0) {res.push_back(-1);res.push_back(-1);}
        return res;
        
    }
};