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
        
        int end = nums.size()-1;
        if(nums.size()==0||end==0) return true;
        int start = 0;
        int cur = 0;
        int next = 0;
        while(next < end) {
        	 if(nums[cur]==0)break;
             next = nums[cur] + cur;
             cur = next;
             cout<<cur<<endl;
        }
        if(next==end) return true;
        else return false;
        
    }

    bool canJump(vector<int>& nums)  {
        int  n = nums.size(), i = 0,cur = 0;
        while(cur<n-1) {
            int pre = cur;
            for(;i<=pre;i++) {
                cur = max(cur,i+nums[i]);
            }
            if(pre==cur)return -1;
        }
        if()
    }