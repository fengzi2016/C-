#include<stdio.h>
#include<string.h>
int main(){
	int i,j;char *point;
	int max(int i,int j);
	//void fuzhi(char *p,int n,char j);
	int count_P,count_A,count_T,count_e,count_s,count_t;
	count_P=count_A=count_T=count_e=count_s=count_t=0;
	int s[6];
	char m[10000];
	gets(m);
	point=m;
	for(i=0;i<strlen(m)-1;i++){
		switch (*point){
			case 'P':count_P++;break;
			case 'A':count_A++;break;
			case 'T':count_T++;break;
			case 'e':count_e++;break;
			case 's':count_s++;break;
			case 't':count_t++;break;
			default:break;
		}
		point++;
	}
	//char P[count_P],A[count_A],T[count_T],e[count_e],s[count_s],t[count_t];
//	fuzhi(P,count_P,'P');	fuzhi(A,count_A,'A');	fuzhi(T,count_T,'T');	
//	fuzhi(e,count_e,'e');fuzhi(s,count_s,'s');	fuzhi(t,count_t,'t');
	int o,q,l;
	s[6]=(count_P,count_A,count_T,count_e,count_s,count_t);
	o=max(count_P,count_A);q=max(count_T,count_e);l=max(count_s,count_t);
	o=max(o,q);q=max(l,q);l=max(o,q);
	for(i=0;i<l;i++){
		for(j=0;j<6;j++){
			if(s[j]){
				s[j]--;
			}
			switch (j){
				case 0:printf("P");break;
				case 1:printf("A");break;
				case 2:printf("T");break;
				case 3:printf("e");break;
				case 4:printf("s");break;
				case 5:printf("t");break;
				default:break; 
			}
			
		} 
	}
	printf("\n");	
	return 0;
	
} 
/*void fuzhi(char *p,int n,char j){
	int i;
	for(i=0;i<n;i++){
		*p=j;
	}
	
}*/
int max(int i,int j){
	if(i>j)return i;
	else return j;
}