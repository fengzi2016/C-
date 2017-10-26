# include <iostream>
# include <math.h>
# include<fstream>  
using namespace std;
typedef struct{
	char name[4];
	int thing;
	int num[10];
}Student;
int main(){
	int stcount=0,thcount=0;
	int i,j,k;
	int n,m;
	cin>>n>>m;
	int checkArr[m];
	Student student[n];
	for(i=0;i<m;i++)
		cin>>checkArr[i];
	for(j=0;j<n;j++){
	    for(k=0;k<4;k++){
    		cin>>student[j].name[k];
	    /*	if(student[j].name[k]==" "){
		    	break;
		    }*/
    	}
    /* cin<<student[j].thing;*/
 	 for(k=0;k<student[j].thing;k++){
 	 	cin>>student[j].num[k];
 	 }
	}
	int t,s=0;
	for(t=0;t<n;t++){
 		for(j=0;j<student[t].thing;i++){
		  	for(i=0;i<m;i++){
	  			if(student[t].num[j]==checkArr[i]){
	  				thcount++;
	  				k=0;
	  				s=1;
				  	while(student[i].name[k]!=" "){
		  				cout<<student[i].name[k++];		
		  			}
		  			cout<<" ";
		  			cout<<checkArr[i];
		  			if(j!=student[t].thing-1)cout<<" ";
		  			else count<<"\n";
				  }
		 	 	}
  	` 	}
  		if(s==1)stcount++;
  		s=0;
	}
	cout<<stcount<<" "<<thcount;	 
}