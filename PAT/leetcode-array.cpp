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
  // 加一
  vector<int> plusOne(vector<int>& digits) {
      int len = digits.size();
      int i,j;
      int yushu,shang = 0;
      digits[len-1]+=1;
      for(i = len-1;i >= 0; i--){
      	digits[i]+= shang;
      	shang = digits[i]/10;
      	if(shang == 0) return digits;
      	else{
	       yushu = digits[i]%10;
	      	digits[i] = yushu;
	      }  
      }
      
      if(i == -1){
      	
      	 vector<int> a(len+1);
      	 a[0] = 1;
      	 for(j = 0; j<len ; j++){
      	 
 	      	a[j+1] = digits[j];
 	      }
 	      return a;
      }
    } 
//移动零
 void moveZeroes(vector<int>& nums) {
	int i,j,count=0;
	int len = nums.size(); 
	for(i=0;i<len-count;i++){
		if(nums[i]==0){
			for(j=i;j<len-1;j++){
				nums[j] = nums[j+1];
			}
			nums[len-1] = 0;
			count++;
			i--;
		}
	}
  } 
 //相加
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a(2);
        int i,j,k;
        int len = nums.size();
        for(j=0;j<len-1;j++){
            for(k=j+1;k<=len-1;k++){
                if(nums[j]+nums[k]==target) {
                    a[0]=j;
                    a[1]=k;
                    return a;
                }
            }
        }
    } 
 //有效数独
  bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k;
        int rows[][] = new int[9][9];
        int cols[][] = new int[9][9];
        int boxs[][] = new int[9][9];
        for(i=0;i<board.size();i++){
        	for(j==0;j<board.size[i].size();j++){
       			if(board[i][j] != '.'){
	        	int num = board[i][j]-'0'-1;
	        	int k = i/3*3+j/3;
		        	if(rows[i][num]==1||cols[j][num]==1||boxs[k][num]==1){
		        		return false;
		        	}
       			}
	        	rows[i][num]=cols[j][num]=box[k][num]=1;
	        }
        }
        return true;
  }