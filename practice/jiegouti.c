#include<stdio.h>
int main(){
	struct Person{
		int num;
		char name[8];
		float grade;
	};
	int i,j,k,n;
	int sum;
	float averge;
 	//struct Person *s = (struct Person*)malloc(s*sizeof(struct Person));
	printf("请输入学生数量:\n");
	scanf("%d",&n);
	printf("请输入学生的学号，姓名，成绩:\n");
	struct Person s[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d%s%f",&s[i].num,s[i].name,&s[i].grade);
	}
	sum=0;
	for(j=0;j<n;j++){
		sum=s[j].grade+sum;
	}
	averge=sum/n;
	printf("平均分为%2.1f\n",averge);
	k=0;
	for(i=0;i<n;i++){
		if(s[i].grade<averge){
			b[k++]=s[i];
		}
	}
	
	for(i=0;i<k;i++)
		printf("%d,%s,%2.1f",b[i].num,b[i].name,b[i].grade);
	return 0;
}