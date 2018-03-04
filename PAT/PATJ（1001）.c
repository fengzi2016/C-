//思路 相加之后再除以1000的倍数，根据a,b的范围可以知道sum最大为2000000，最小为-2000000，即1000*1000*1000之间
#include <stdio.h> 
int main(){
	long int a,b;
	scanf("%ld %ld",&a,&b);
	long int sum,reserv;
	sum = a+b;
	reserv = sum;
	int i,chushu = 1000000;
	int temp;
	int array[3];
	int weishu(int n);
	for(i=0;i<3;i++){
		temp = sum/chushu;
		array[i]=temp;
		sum = sum %chushu;
		chushu /=1000;
	}
	for(i=0;i<3;i++){
	  if(array[i]<0){
			array[i] *= -1;
		}
	}
	
	if(reserv<0){
	   printf("-");
	}
	if(array[0]==0&&array[1]==0){
		printf("%d",array[2]);
	}else if(array[0]==0){
		printf("%d,",array[1]);
		for(i=0;i<3-weishu(array[2]);i++)
		 printf("0");
		printf("%d",array[2]);
	}else{
	    printf("%d,",array[0]);
	    for(i=0;i<3-weishu(array[1]);i++)
		 printf("0");
		printf("%d,",array[1]);
		for(i=0;i<3-weishu(array[2]);i++)
		 printf("0");
		printf("%d",array[2]);
		
	}
	return 0;
}
int weishu(int n){
    int count = 0;
 
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
    return count;
 
}