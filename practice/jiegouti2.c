#include<stdio.h>
struct Person
		{ 	int num;
			char name[8];
		 	char sex;
 		 	int age;
			float grade;
		}stu[10]={
		{101,"Zhang",'M',19,95.6},
		{102,"Wang",'F',18,92.4},
		{103,"Zhao",'M',19,85.7},
		{104,"Li",'M',20,96.3},
		{105,"Gao",'M',19,90.2},
		{106,"Lin",'M',18,91.5},
		{107,"Ma",'F',17,98.7},
		{108,"Zhen",'M',19,89.8},
		{109,"Xu",'M',19,89.8}, 
		{110,"Mao",'F',18,94.9},
		};	 	
		int main(){
			int i,j;
			struct Person temp;
			printf("学号 姓名 性别 年龄  成绩\n");
			for(i=0;i<10;i++){
			printf("%4d %5s %2c %5d  %2.1f\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].grade);
			}
			for(j=0;j<9;j++)
				for(i=0;i<9-j;i++){
					if(stu[i].grade>stu[i+1].grade){
						temp=stu[i];
						stu[i]=stu[i+1];
						stu[i+1]=temp;
					}
				}
			printf("学号 姓名 性别 年龄  成绩\n");
			for(i=0;i<10;i++){
			printf("%4d %5s %2c %5d  %2.1f\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].grade);
			}
			return 0;
		}
		/*put(){
			printf("学号 姓名 性别 年龄  成绩\n");
			for(i=0;i<10;i++){
			printf("%4d %5s %2c %5d  %2.1f\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].grade);
			}
		*/
