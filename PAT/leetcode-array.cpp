*//从排序数组中删除重复项
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
  // 验证二叉搜索树
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

      int min(TreeNode* root) {
        while(root->left) {
            root = root->left;
        }
        return root->val;
    }
    int max(TreeNode* root) {
        while(root->right){
            root = root -> right;
        }
        return root->val;
    }
    bool isValidBST(TreeNode* root) {
       
        bool left = true;
        bool right = true;
        if(root) {
            int val = root->val;
            if(root -> left){
                left = isValidBST(root->left) && (val>max(root->left));
            } 
            if(root -> right) {
               right = isValidBST(root->right)&&(val<min(root->right));
             }
        if (!root->left && !root->right) {
                return true;
        }
        return left&&right;
     }
     return true;
    }
  
}; 
//二叉树：验证对偶二叉树 
 bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return symmetric(root->left,root->right);
    }
  
    symmetric(TreeNode* a,TreeNode* b) {
        if(!a&&!b)return true;
        else if(!a||!b)return false;
        else if(a && b) {
            return (a->val == b->val)&&symmetric(a->left,b->right)&&symmetric(a->right,b->left);
        }
        
    } 
    
    
    // 大数相加
	# include<iostream>
# include <string>
using namespace std;
int main() {
	string a,b;
	cin>>a;
	cin>>b;
	int i,j,lena,lenb,maxlen;
	lena=a.length();
	lenb=b.length();
	vector<char> ca[lena],cb[lenb];
	int k=0,t=0;
	for(i=lena-1;i>=0;i--){
		ca[k++]=a[i];
	} 
	for(i=lenb-1;i>=0;i--){
		cb[t++]=b[i];
	} 
	maxlen = lena>lenb?lena:lenb;
	int overnum = 0;
	int sum;
	int w ;
	int result[maxlen];
	for(i=0;i<maxlen;i++) {
		sum = overnum;
		if(a[i]){
			sum += a[i]; 
		}
		if(b[i]){
			sum += b[i];
		}
		int s = sum%10;
		result[maxlen-1-w] = s;
		w++;
		overnum = sum / 10;
		
	}
	 for(i=0;i<maxlen;i++) {
 		cout<<result[i];
 	}
} 
// 数串
# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j;
    vector<string> strArr;
    string temp;
    for(i=0;i<n;i++) {
        cin>>temp;
        strArr.push_back(temp);
    }
    sort(strArr.begin(),strArr.end(), [](string s1, string s2){
        return (s1+s2) > (s2+s1);
    });
    for(i = 0;i < strArr.size();i++) {
        cout<<strArr[i];
    }
}


//动态规划

//1.爬楼梯
  int climbStairs(int n) {
        if(n==0 || n==1 || n==2) {
            return n;
        }
        int r[n+1];
        int i;
        r[1] = 1;  
        r[2] = 2;  
        for(i=3;i<n+1;i++){
            r[i] = r[i-1] + r[i-2];
        }
        return r[i-1];
    }
//买卖股票的最佳时机
int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int i,j;
        int max = 0;
        for(i = 0; i < prices.size()-1;i++) {
            for(j = i + 1;j < prices.size();j++) {
                int c = prices[j] - prices[i];
                if(max<c) max = c;
            }
        }
        return max;
        
    }
};
// 最大子序和
public:
    int maxSubArray(vector<int>& nums) {
        return fengzhifa(0,nums.size()-1,nums);
        
    }
private:
    int fengzhifa(int start, int end, vector<int>& nums) {
        if(start == end) {
                return nums[start];
        }
        int center = (start+end)/2;
        int i,maxLeft,maxRight,leftSum,rightSum;
        
        //递归
        maxLeft = fengzhifa(start,center,nums);
        maxRight = fengzhifa(center+1,end,nums);
        leftSum = rightSum = 0;
        int maxl,maxr;
        maxl = nums[center], maxr = nums[center+1];
        for(i=center;i>=start;i--){
            leftSum += nums[i];
            if(leftSum > maxl) {
                maxl = leftSum;
            }
        }
        
        for(i = center+1; i <= end; i++) {
            rightSum += nums[i];
            if(rightSum > maxr) {
                maxr = rightSum;
            }
        }
        int sum = maxl + maxr; //最大子串跨域中值
        int maxe = max(maxLeft,maxRight); //最大值子串在某一边
        if(sum > maxe ) return sum;
        else return maxe;
    }
