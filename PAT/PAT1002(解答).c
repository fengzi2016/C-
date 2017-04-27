#include<stdio.h>
int main(){
char a[105];/*创建数组，存入整数*/
scanf("%s",a);/*学习：直接用数组名称输入数组，而不用for循环*/ 
int i,count=0;
for(i=0;a[i]!='\0';i++)/*a[i]!='\0'  因为'\0'是数组结束的标志*/ 
{
	count+=(a[i]-'0');/*'0' a[i]为字符串 其ASCI码-去'0'字符串的ASCI码等于其大小*/ 
}
char out[105];
sprintf(out,"%d",count);/*sprintf()函数，意思是把整数count打印成一个字符串保存在out中*/ 
for(i=0;out[i]!='\0';i++){
	switch(out[i]){/*case 后接字符串，因为sprintf*/ 
		case'0':printf("ling");break;
		case'1':printf("yi");break;
		case'2':printf("er");break;
		case'3':printf("san");break;
		case'4':printf("si");break;
		case'5':printf("wu");break;
		case'6':printf("liu");break;
		case'7':printf("qi");break;
		case'8':printf("ba");break;
		case'9':printf("jiu");break;
		default :break;
	}
	if(out[i+1]!='\0')printf(" "); 
}

return 0;
}
 