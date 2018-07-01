#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int main(){
	int strStr(string haystack, string needle);
	cout<<strStr("hello","ll");
	/* string trim(string str);
	 bool fu(string str);
	 bool shuzhi(char a);
	 int num(string s);
	//string reverseString(string s);
	//int reverse(int x);
	 /*int myarray[5] = {2,7,9,3,1};  
     vector<int> myvector(myarray , myarray+5);  
   	 int rob (vector<int> &nums); 
     int maxV = rob(myvector);*/
    /*bool isPalindrome(string s);
    string a = "`l;`` 1o1 ??;l`";
    cout<<isPalindrome(a);*/
	/*int myAtoi(string str);
	cout<<myAtoi( "2147483646");
     
/*	int te[] = {7,8,3,9,0,0,9,1,5};
	vector<int> a(te,te+9);
	bool isValidSudoku(vector<vector<char>>& board);
	//vector<int> twoSum(vector<int>& nums, int target);
	vector<int> result  = twoSum(a,6);*/ 
//	for(i=0;i<r.length();i++)
	//	cout<<r;
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
int strStr(string haystack, string needle) {
        if (needle.length()==0) return 0;
		int hlen = haystack.length();
		int nlen = needle.length();
		int i,j,k;
		for(i=0;i<hlen;i++) {
			if(haystack[i]==needle[0]) {
				k = i;
				for(j=0;j<nlen;j++) {
					if(haystack[k++]!=needle[j]) {
						break;
					}
				}
				if(j==nlen) return k-j;
			
			}
		
			
		}
		return -1;
}
  /*bool shuzhi(char a) {
        if(a >= '0' && a<='9') {
            return true;
        }
        return false;
    }
int num(string s) {
        int i;
        int sum = 0;
        int k = 1;
        
        for(i = s.length()-1 ;i>=0;i--) {
            int temp = s[i]-'0';
            sum += k*temp;
            k *= 10;
        }
        return sum;
    }
    string trim(string str) {
        int i ;
        int flag = 0;
        string pure = "";
        for(i=0;i<str.length();i++) {
        	if(flag == 0) {
	        	if(str[i]!=' ') {	
	            	flag = 1;
	            	i--;
	            }
	        }else {
        		pure += str[i];
        	} 
        }
        
        return pure;
    }
    string nozero(string str) {
    	int i;
        if(str[0]=='+' || str[0]=='-') i=1;
    	 else  i = 0;
    	string pure ="";
    	int flag = 0;
   	     
   	    if(str[0]=='-') pure += '-'; 
    	for(i;i<str.length();i++) {
	    	if(flag == 0) {
	    		if(str[i]!='0'){
	    			if(shuzhi(str[i])) {
			    			flag = 1;
		    				i--;
			    	}
			    	else {
	    				return pure;
	    			}
		    	
		    	}
	    	} else {
	    		pure += str[i];
	    	}
	    }
	   
	    return pure;

    }
    int fu(string str) {
        if(str[0] == '-') {
            return -1;
        } else if(str[0]== '+'){
            return 1;
        }else {
        	return 0;
        }
    }
  
    
int myAtoi(string str) {
        string noblank = trim(str);
        noblank = nozero(noblank);
        int iffu = fu(noblank);
        string result = "";
        int i;
        if(iffu == -1 || iffu == 1) i = 1;
        else i = 0;
        
            for(i;i<str.length();i++) {
                if(shuzhi(noblank[i])){
                    result += noblank[i];
                }else{
                
                    break;
                }
             }
        
        string maxv = "2147483647";
        string minv = "-2147483648"; 
	
        if(result.length()!=0) {
          if(iffu == -1) {
          	  
              if(result.length()>10 || (result > "2147483648" && result.length() == 10)) return -2147483648;
              else return -num(result);
            
          }else {
              if(result.length()>10 || (result > "2147483647" && result.length() == 10) ) return 2147483647;
              else return num(result);
          }
         }  else {
            return 0;
        }
  
    }


                   

                   
 /*int firstUniqChar(string s) {
 	int i,j;
 	int length = s.length();
 	if(length == 1)return 0; 
  	for(i=0;i<length;i++){
	  	for(j=0;j<length;j++){
	  		if(s[i]==s[j] && i!= j){
		  		break;
		  	}
	  	}
	  	if(j==length){
	  		return i;
	  	}
	  }
	  return -1;
 }*/ 
/*int reverse(int x) {
	int result = 0;
	while(x!=0){
 		if ( x > 0 && result > INT_MAX- x % 10 || x < 0 && result < INT_MIN - x % 10){
	        return 0;
 		}
 		if(result > INT_MAX / 10 || result < INT_MIN /10){
		 	return 0; 
		 } 
		result = result * 10 + x%10;
		x /= 10;
      }	
	//result += temp;
	return result;   
     
}*/
 /*string reverseString(string s) {
        int length = s.length();
        int i,j;
        string result = "";
        for(i=length-1;i>=0;i--){
            result += s[i];
        }
        return result;
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
 /*bool isValidSudoku(vector<vector<char>>& board) {
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
        
 }*/
 
 /*int rob(vector<int>& nums) {
	int n = nums.size();
 	if(n==0) {
	 	return 0;
	 }
	 if( n == 1 ){
 		return nums[0];
 	}
   
 	int i;
 	int maxV[n];
 	maxV[0] = nums[0];
 	maxV[1] = max(nums[1],nums[0]);
 	for(i = 2;i < n; i++) {
 	   maxV[i] = max(maxV[i-2]+nums[i],maxV[i-1]);
	 }
	 return maxV[n-1];
    }*/ 
    
   /* 
     char toLowerWord(char a) {
         if(a>='A' && a<='Z') {
             a += 32;
         }
         return a;
     }
    bool isPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1) return true;
        int i,j;
        string a = "";
        for(i = 0; i< s.length();i++){
            if((s[i] >= 'A' && s[i] <= 'Z') ||  (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))   {
                a += toLowerWord(s[i]);	 
            }
        } 
        
        for(i=0,j=a.length()-1;i<a.length(),j>=0;i++,j--) {
                if(a[i]!=a[j]) return false;
            
        }
        return true;
    }
*/ 
    