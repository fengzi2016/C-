#include<math.h>
#include<iostream>
#include <stdio.h>
using namespace std;
int main() {
	uint32_t n = 43261596; 
	uint32_t result = 0;
    int k = 2;
        for(int i = 31;n;n>>=1) {
           int base = n&1;
           result += base*pow(2,i);
           i--;
        }
     cout<<result;   
        
	
}
