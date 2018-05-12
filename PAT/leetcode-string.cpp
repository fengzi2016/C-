#include <vector>
#include <string.h>
//1.反转字符串，用下标
//请编写一个函数，其功能是将输入的字符串反转过来。

// 示例：

// 输入：s = "hello"
// 返回："olleh"

  string reverseString(string s) {
        int length = s.length();
        int i,j;
        string result = "";
        for(i=length-1;i>=0;i--){
            result += s[i];
        }
        return result;
    }
//2.颠倒整数,用/和% 就行，主要考虑溢出
// 示例 1:

// 输入: 123
// 输出: 321

int reverse(int x) {
   			int result = 0;
        while(x!=0){
            if ( x>0 && result > INT_MAX- x%10 || x<0 && result < INT_MIN - x % 10){
                return 0;
            }
            if(result > INT_MAX / 10 || result < INT_MIN /10){
                return 0; 
             } 
            result = result * 10 + x%10;
            x /= 10;
          }	

	return result;   
    }

//3.找到只存在唯一个字符的下标
//案例:
// s = "leetcode"
// 返回 0.
 int firstUniqChar(string s) {
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
 }