//从排序数组中删除重复项
#include <vector>
int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int n:nums){
            if(!i||n>nums[i-1]){
                nums[i++] = n;
            }
        }
        return i;
    }
//买卖股票的最佳时机 II
  int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int i,sum = 0;
        for(i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                sum += prices[i+1]-prices[i];
            }
        }
        return sum;
        
    }
//旋转数组
 void rotate(vector<int>& nums, int k) {
        
		int i,j=0;
        vector <int> result;
        result = nums;
        int realk = k%nums.size();
        for(i=0;i<nums.size();i++){
            nums[(i+realk)%nums.size()] = result[i];
        }

      }
       

//存在重复
  bool containsDuplicate(vector<int>& nums) {
        
        if(nums.size()==0) return false;
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) 
                return true;
        }
       
     return false;
}

//取两个数组的交集，数量要一样
vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
	int i,j;
	vector<int> result;
	if(nums1.size()==0||nums2.size()==0){
           return result;
     }
    vector<bool> temp(nums2.size(),false);
	for(i=0;i<nums1.size();i++){
		for(j=0;j<nums2.size();j++){
			if(nums1[i]==nums2[j]&&temp[j] ==  false){
				result.push_back(nums1[i]);
                temp[j] = true;
                break;
			}
		}
	}
	return result;
} 

//只出现一次数字
  int singleNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();){
            if(nums[i]==nums[i+1]){
                i = i+2;
                cout<<"i="<<i<<endl;
            }else{
                return nums[i];
            }
                
        }
        
    } 