#include <stdio.h>
#include <iostream>
#include <vector.h>

int main() {
	int a[5]  = {3,2,1,0,4};
	int b[2] = {
		1,2
	};
    bool canJump(vector<int>& nums);
	vector<int> base(b,b+5);
	canJump(base);
	
}
  bool canJump(vector<int>& nums) {
        int size = nums.size(),i=0,cur=0;
        while(cur<size-1) {
            int pre = cur;
            for(;i<=pre;i++) {
                cur = max(cur,i+nums[i]);
            }
            if(pre == cur) return false;
        }
        return true;
        
    }

    bool canJump(vector<int>& nums)  {
        int  n = nums.size(), i = 0,cur = 0;
        while(cur<n-1) {
            int pre = cur;
            for(;i<=pre;i++) {
                cur = max(cur,i+nums[i]);
            }
            if(pre==cur)return false;
        }
        return true;
    }