/*题目是：
按1则输出大写字母
按2则输出小写字母
	示例输入：1 65
	    输出: a
	    输入:2 65
	    输出: A */  
/*方法一：*/
#include<stdio.h>
int main(){
	char choose1(int n);
	char choose2(int n);
	int n,m;int ch;
    char (*p)(int n);
	scanf("%d",&n);
	scanf("%d",&m);
	if(m>=91&&m<=96||m<65||m>122)
		printf("输入错误"); 
	else{
		if(n==1)p=choose1;
		if(n==2)p=choose2;
		ch=(*p)(m);
		printf("%c",ch);
	} 
	return 0;
} 
char choose1(int n){
	char ch;
	int cha;
	if(n<=97){
		cha=n-65;
		ch='A'+cha;		
	}
	else{
		cha=n-32-65;
		ch='A'+cha;
	}
	return ch;
}
char choose2(int n){
	char ch;
	int cha;
	if(n<=97){
		cha=n+32-97;
		ch='a'+cha;
	}
	else{
		cha=n-97;
		ch='a'+cha;
	}
	return ch;
}
/*方法二*/
#include<stdio.h>
int main(){
	int n,m;char you;
	char fun(int n,int(*p)(int n));
	char choose1(int n);
	char choose2(int n);
	scanf("%d",&n);
	scanf("%d",&m);
	if(m>=91&&m<=96||m<65||m>122)
		printf("输入错误"); 
	else{
	if(n==1) you=fun(m,choose1);
	if(n==2) you=fun(m,choose2);
	printf("%c",you);
	}
	return 0; 
}
char fun(int n,int(*p)(int n)){
	char result;
	result=(*p)(n);
	return result;
}
char choose1(int n){
	char ch;
	int cha;
	if(n<=97){
		cha=n-65;
		ch='A'+cha;		
	}
	else{
		cha=n-32-65;
		ch='A'+cha;
	}
	return ch;
}
char choose2(int n){
	char ch;
	int cha;
	if(n<=97){
		cha=n+32-97;
		ch='a'+cha;
	}
	else{
		cha=n-97;
		ch='a'+cha;
	}
	return ch;
}