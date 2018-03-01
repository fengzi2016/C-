#include <stdio.h>  
int main(){
  int n,i,j;
  char a,b;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
     
    for(j=0;j<8;j++){
      scanf("%c-%c",&a,&b);
       if(b=='T'){
      switch(a){
      case 'A':printf("1");break;
      case 'B':printf("2");break;
      case 'C':printf("3");break;
      case 'D':printf("4");break;
      }
   
   
    }
  }
  }
}