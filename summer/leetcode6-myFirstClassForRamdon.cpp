#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Solution {
    
public:
    vector<int> _nums;
    vector<int> _tempNumbs;
    int len;
    Solution(vector<int> nums) {
        _nums = nums;
        len = nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return _nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
    	_tempNumbs = _nums;
        int index,temp,i;
		srand(time(NULL)));
		for(i=len-1;i>0;i--) {
			index = rand()%i;
			temp = _tempNumbs[i];
			_tempNumbs[i] = _tempNumbs[index];
			_tempNumbs[index] = temp;
			
		}
		return _tempNumbs;
    }
};