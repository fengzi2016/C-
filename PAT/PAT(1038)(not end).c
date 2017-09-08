#include<stdio.h>
int number;
int findSameArr(int array[],int grade);
scanf("%d",&number);
int score[number];
int i,j=0;
for(i=0;i<number;i++){
	scanf("%d",&score[i]);
}
int outNumber;
scanf("%d",&outNumber);
int outScoreArr[outNumber];
for(i=0;i<outNumber;i++){
	scanf("%d",&outScoreArr[i]);
}
for(i=0;i<outNumber;i++){
	printf("%d",findSameArr(score[number],outScoreArr[i]));
}
}
int findSameArr(int array[],int grade){
	int i,j=0;
	int len=sizeof(array)/sizeof(array[0]);
	for(i=0;i<len;i++){
		if(array[i]==grade){
			j++;
		}
	}
	return j;
}