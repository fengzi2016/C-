#include <iostream>
#include <string>
#include <stack> 
#include <vector>
using namespace std;
    
        vector<vector<int>> ThreeSum (vector<int>& nums) {
            vector<vector<int>> res;
            sort(nums.begin(),nums.end());
            int k;
            for(k=0;k<nums.size();k++) {
                if(nums[k]>0)break;
                if( k>0 && nums[k] == nums[k-1]) continue;
                int target = 0 - nums[k];
                int i = k+1, j = nums.size() - 1;
                while(i<j) {
                    if(nums[i]+nums[j]==target) {
                        res.push_back({nums[k],nums[i],nums[j]});
                        while(i<j && nums[i]==nums[i+1])i++;
                        while(i<j && nums[j]==nums[j-1])j--;
                        i++;
                        j--;
                    }else if(nums[i]+nums[j]<target){
                        i++;
                    }else {
                        j--;
                    }
                }
            }
            return res;
        }
