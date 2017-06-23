#include<stdio.h>
struct Student{
	int number[8];
	int cai;
	int de;
};
int main(){
	int n,i;
	void outpurt(struct Student x);
	void jiaohuan(struct Student *x,struct Student *y);
	void paixu(struct Student *a,int n);
	int jif,youf,t,k,f,g;
	t=k=f=g=0;
	scanf("%d%d%d",&n,&jif,&youf);
  if(n<=100000&&jif>=60&&youf<100){
	struct Student stu[n];
	struct Student a[n],b[n],c[n],d[n],temp;
	for(i=0;i<n;i++){
		scanf("%s%d%d",stu[i].number,&stu[i].de,&stu[i].cai);
		if(stu[i].cai>=youf&&stu[i].de>=youf)
			a[k++]=stu[i];
		else if(stu[i].de>=youf&&stu[i].cai>=jif)
			b[t++]=stu[i];
		else if(stu[i].de>=stu[i].cai&&stu[i].de>=jif&&stu[i].cai>=jif)
			c[f++]=stu[i];
		else if(stu[i].de>=jif&&stu[i].cai>=jif)
			d[g++]=stu[i];
	}
	for(i=0;i<k;i++)
		paixu(a,k);
	for(i=0;i<t;i++)
		paixu(b,t);
	for(i=0;i<f;i++)
		paixu(c,f);
	for(i=0;i<g;i++)
		paixu(d,g);
	printf("%d\n",k+t+f+g);
	for(i=0;i<k;i++){
		outpurt(a[i]);
	}
	for(i=0;i<t;i++){
		outpurt(b[i]);
	}
	for(i=0;i<f;i++){
		outpurt(c[i]);
	}
	for(i=0;i<g;i++){
		outpurt(d[i]);
	}
	return 0;
 }
else return 0;
}
void outpurt(struct Student x){
	printf("%s %d %d\n",x.number,x.de,x.cai);
}
void  jiaohuan(struct Student *x,struct Student *y){
	struct Student temp;
	temp=*x;
	*x=*y;
	*y=temp;
} 
void paixu(struct Student *a,int n){
	int i,j;
	int sum1,sum2;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			sum1=a[i].cai+a[i].de;
			sum2=a[j].cai+a[j].de;
			if(sum1<sum2){
				jiaohuan(a+i,a+j);
			}
			else if(sum1==sum2){
				if(a[j].de>a[i].de){
					jiaohuan(a+i,a+j);
				}
				else if(a[j].de==a[i].de){
					if(a[j].number>a[i].number)
						jiaohuan(a+i,a+j);
				}
			}
		}
	}
  }
  