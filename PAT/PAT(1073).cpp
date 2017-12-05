#include<iostream>
#include<stdio.h>
#include<fstream>  
using namespace std;
typedef struct Choice{
	int fullscore;
	int fullchoice;
	int truechoice;
	char trueoption[5];
};
typedef struct Answer{
	int score;
	char mistake[5];
};
bool isSon(char *father,int father_len,int son_len,char *son,char *diff){
	//选择题正确选项为father,单个学生选项为son,diff为不同选项的字符串数组 
	int i,j,flag=0;
	if(father_len<son_len){
		flag=1;
		for(i=0;i<father_len;i++){
			for(j=0;j<son_len;j++){
				if(son[i]!=father[j]){
					 *diff=son[i];
					  diff++;
				}	
			}
		}
		
	}else{
		for(i=0;i<father_len;i++){
			for(j=0;j<son_len;j++){
				if(son[i]!=father[j]){
					 *diff=son[i];
					  diff++;
					  flag=1;
				}	
			}
		}
		if(flag==0){
			return true;
		}else{
			return false;
		}
	}
	
}
int main(){
	int studentNum,choiceNum,i,j;
	cin>>studentNum>>choiceNum;
	Choice questionArr[choiceNum];
	for(i=0;i<choiceNum;i++){
		cin>>questionArr[i].fullscore>>questionArr[i].fullchoice>>questionArr[i].truechoice;
		for(j=0;j<questionArr[i].truechoice;j++){
			cin>>questionArr[i].trueoption[j];
		}
	}
	char right;
	int num;
	char answer[5];
	int k;
	Answer an[studentNum];
	for(i=0;i<studentNum;i++){
		for(j=0;j<choiceNum;j++){
			cin<<right;
			cin<<num;
			for(k=0;k<num;k++){
				cin>>answer[k];
			}
			if(isSon(questionArr[j].trueoption,questionArr[j].truechoice,num,answer,an[]))
			
		}
	}
	//char a[3];空格不算，以/n结束一行 
	

	
} 