#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	j=n+m;
	int a[j];
	for(i=m;i<n+m;i++){
		scanf("%d",&a[i]);
	}
	for(i=n+m-1,j=m-1;i>=n-1;i--){
		a[j--]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d%c",a[i],(n-1-i)!=0?' ': '\0');
		//printf("%d ",a[i]);
	}
}  
/*#include<stdio.h> 
int main(){
	int i, N,M;
	int a[105];
	scanf("%d %d",&N,&M);
	M=M%N;
	for(i=0;i<N;i++){
		scanf("%d",a+i);
	}
	int count=0;//用来计数，为了“最后一个元素不输出空格服务”
	for( i=N-M; i<N;i++){
		count++;
		printf("%d",a[i]); 
		if(count<N)
			printf(" ");
	}
	for(i=0;i<N-M;i++){
		count++;
		printf("%d",a[i]);
		if(count<N)printf(" ");
	}
	return 0;
}
*/                              