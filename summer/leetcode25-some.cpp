#include<math.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	  int numRows;
	  cin>>numRows; 
      int i,j;
      vector<vector<int> > all ;
      
        for(i=0;i<numRows;i++) {
            vector<int> temp ;
            for(j=0;j<=i;i++) {
                if(j == 0 || j==i) {
                     temp.push_back(1);
                } 
				else {
                    temp.push_back(all[i-1][j] + all[i-1][j-1]);
                } 

            }
            all.push_back(temp);
        }
        return all;
    }
    
        
