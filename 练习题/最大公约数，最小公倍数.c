#include <stdio.h>
int main(){
  	int  product,  gongyue, gongbei,   m,   n,   temp;
                                      
  	printf("请输入两个正整数m,  n:");
  	scanf("%d%d",&m,&n); 
    if (m<n) {temp=m;m=n;n=temp;} 
	        		  product = m*n;     
   	                  gongyue=m%n; 	    
                      while(gongyue!=0){                             
   					   m = n;
    		           n = gongyue;
   		               gongyue=m%n;
                      }
                   gongbei = product/n;                  //求最小公倍
                   
                   printf("它们的最大公约数为:%d\n",  n);
                   printf("它们的最小公倍数为:%d\n",  gongbei);
                   return 0;
 }
