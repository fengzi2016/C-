#include<stdio.h>
#include<math.h>
int main(){
	/*错误：无法输入大于long int 的整形，解决办法，使用数组*/
	int x,t,j,f;
	 long int n;
	scanf("%d",&n);
	x=0;
	while(n!=0)
	{
		x=x+n%10;
		n=n/10;
	} 
	j=0;
	f=x;
   while(f){
   	j++;
   	f/=10;
   }
   int a[j];
     	
 		for(t=j-1;t>=0;t--)
    	{
	    	a[t]=x%10;
	    	x=x/10;
	    }
    for(t=0;t<j;t++)
    {
    	switch(a[t])
    	{
   		case 0:printf("ling ");break; 
    	case 1:printf("yi ");break;
    	case 2:printf("er ");break;
    	case 3:printf("san ");break;
    	case 4:printf("si ");break; 	
    	case 5:printf("wu ");break;
		case 6:printf("liu ");break;
		case 7:printf("qi ");break;
		case 8:printf("ba ");break;
		case 9:printf("jiu ");break;	
    	}
    	
    }
	/*错误 */ 
	if(t>1) printf("\b");

    return 0;
}