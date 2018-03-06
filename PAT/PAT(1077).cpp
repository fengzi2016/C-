# include <stdio.h> 
# include <iostream>
# include <math.h>
# include<fstream>  
using namespace std;
 int main(){
 	int N,M;
 	int i,j;
 	cin>>N>>M;
	int teacherSc;
	int min = 50,max =0;
	float sum;
	int array[N][N];
	int count=0;
	for(j=0;j<N;j++)
	{
		sum = 0;
		for(i=0;i<N;i++){
			cin>>array[j][i];
	        if(i!=0){
	        	
	        	if(array[j][i]<0||array[j][i]>M){
		        	array[j][i]=0;
		        	count ++ ;
		        }else{
	        	   
      			   if(array[j][i]>max){
	        		max = array[j][i];
	        	   }
	        	   if(array[j][i]<min){
			        	min = array[j][i];
		            }
        		}
		        
		        sum +=array[j][i];
		       
	        }else{
        		teacherSc = array[j][i];
        	}
		}
		
		sum = sum - max - min;
	    float avg = sum/(N-count-3);
		float resu = (teacherSc+avg)/2+0.5;
		resu = floor(resu);
		printf("%d",int(resu));
		if(j!=N-1){
			printf("\n");
		}
		
		count = 0;
	    min = 50,max =0;
	
		
	} 
 }
