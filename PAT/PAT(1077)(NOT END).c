#include <stdio.h>

int main(void) { 
    int max_score,number;
    int score[number][number];
    int result[number]={0};
    int i,j;
    for(i=0;i<number;i++){
        for(j=0;j<number;j++){
            scanf("%d",&score[i][j])
           
            if(score[i][j]<=max_score&&score[i][j]>0&&j!=0){
               result[i] = score[i][j]+result[i] ;
            }
            
            
        }
        result[i]=(result[i]+score[i][0])/2+1;
        printf("%d",result[i]);
        printf("\n");
    }
    
}