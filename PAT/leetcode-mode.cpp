#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
using namespace std;
int main(){
	int i;
	int te[] = {7,8,3,9,0,0,9,1,5};
	vector<int> a(te,te+9);
	bool isValidSudoku(vector<vector<char>>& board);
	//vector<int> twoSum(vector<int>& nums, int target);
	vector<int> result  = twoSum(a,6);
	for(i=0;i<result.size();i++)
		cout<<result[i];
	/*int singleNumber(vector<int>& nums);
    //vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) ;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) ;
	int n[] = {9,1}; 
	int te[] = {7,8,3,9,0,0,9,1,5};
	vector<int> b(n,n+2) ;
	vector<int> a(te,te+9);
	int i;
	vector<int> result  = intersect(a,b);
	for(i=0;i<result.size();i++)
		cout<<result[i];*/
}



/* vector<int> twoSum(vector<int>& nums, int target) {
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
/*vector<int> plusOne(vector<int>& digits) {
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
/*vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
	int i,j;
	vector<int> result;
	if(nums1.size()==0||nums2.size()==0){
           return result;
       }
	for(i=0;i<nums1.size();i++){
		for(j=0;j<nums2.size();j++){
			if(nums1[i]==nums2[j]){
                // b.erase(b.begin())
				result.push_back(nums1[i]);
                
			}
		}
	}
	return result;
} 

 /*  vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result ;  
        if(nums1.size()==0||nums2.size()==0){
           return result;
       }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1[0]>nums2[nums2.size()-1])
            return result;
       if(nums1[nums1.size()-1]<nums2[0])
            return result;
        int i,j=0,k=0;
        for(i=0;i<nums1.size(),j<nums2.size();){
          if(nums1[i]>nums2[j]){
              j++;
          }else if(nums1[i]<nums2[j]){
              i++;
          }else{
              result.push_back(nums1[i]);
              k++;
              i++;
              j++;
              
          }
    }
        return result;
}
  */     
       
/* int singleNumber(vector<int>& nums) {
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
        
 }*/ 
 bool isValidSudoku(vector<vector<char>>& board) {
        int rows[][] = new int[9][9];
        int cols[][] = new int[9][9];
        int boxs[][] = new int[9][9];
        int i,j;
        for(i=0;i<board.size();i++){
        	for(j=0;j<board[i].size();j++){
	        	if(board[i][j] != '.'){
	        		int num = board[i][j]-'0'-1;
	        		int k = i/3*3+j/3;
	        		if(rows[i][num]==1||cols[j][num]==1||boxs[k][num]==1)
	       				return false;
	        		}
	        		 rows[i][num] = cols[j][num] = boxs[k][num] = 1;
	        }
        }
		return true;
        
 }