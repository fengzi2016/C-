#include "stdio.h"  
#include "string.h"  
  
#define N 10  
#define M 102  
  
int main(){  
    char *p[N]={"zero","one","two","three","four","five","six","seven","eight","nine"};  
    char num[M];  
    int i,j,t,sum,a[5],b[5];  
    while(scanf("%s", &num) != EOF && strlen(num)<=101){  
        sum = 0;  
        for(i=0;i<strlen(num);i++){  
            sum += num[i] - '0';  
        }  
        j=0;  
        if(sum == 0) {  
            printf("%s", p[sum]);  
        } else {  
            while(sum!=0){  
                a[j] = sum%10;  
                sum /= 10;  
                j++;  
            }  
          
            for(t=j-1;t>=0;t--){  
                if(t != j-1) printf(" ");  
                printf("%s", p[a[t]]);  
            }  
        }  
          
    }  
    return 0;  
}  