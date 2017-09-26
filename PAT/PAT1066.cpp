# include <stdio.h>  
# include <stdlib.h>   // 该文件包含malloc()、realloc()和free()等函数
# include <iostream.h>
   // 该文件包含标准输入输出流cout和cin及控制符setw()等函数 
int main(){
int len(int value);
int m,n,a,b,value;
int i,j,num;
int lennub;
cin>>m>>n>>a>>b>>value;
int s[500][500];
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		cin>>s[i][j];
  }
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(a<=s[i][j]&&s[i][j]<=b){
			s[i][j]=value;
		}
	    for(num=0;num<3-len(s[i][j]);num++){
    		cout<<0;
    	}
    	cout<<s[i][j];
		cout<<" ";  	
    }
   	cout<<"\b"<<"\n";
}
return 0;
}
int len(int value){

	int i=0;
	if(value==0)
	 i=1;
	while(value>0){
		value=value/10;
		i++;
	}
	return i;
}
