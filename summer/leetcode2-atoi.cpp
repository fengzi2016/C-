#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
/*
实现 atoi，将字符串转为整数。

在找到第一个非空字符之前，需要移除掉字符串中的空格字符。如果第一个非空字符是正号或负号，选取该符号，并将其与后面尽可能多的连续的数字组合起来，这部分字符即为整数的值。如果第一个非空字符是数字，则直接将其与之后连续的数字字符组合起来，形成整数。

字符串可以在形成整数的字符后面包括多余的字符，这些字符可以被忽略，它们对于函数没有影响。

当字符串中的第一个非空字符序列不是个有效的整数；或字符串为空；或字符串仅包含空白字符时，则不进行转换。

若函数不能执行有效的转换，返回 0。
*/
using namespace std;
int main(){
	 string trim(string str);
	 bool fu(string str);
	 bool shuzhi(char a);
	 int num(string s);

	int myAtoi(string str);
	cout<<myAtoi( "2147483646");
     

}
  bool shuzhi(char a) {
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


                  