#include <iostream>
using namespace std;
 
int main( )
{
   int number;
   int i;
   cin >>number;
   int team,haoma,score;
   int a[1001]={0};
   int max=0;
   for(i=0;i<number;i++){
   	scanf("%d-%d %d",&team,&haoma,&score);
   	a[team]+=score;
    if(a[team]>a[max]){
   	  max=team;
    }
  }
   cout << max<<" "<<a[max]<< endl;
 
} 