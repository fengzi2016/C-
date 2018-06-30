//先以↙翻转，再 以中间行对称

#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int main() {
	 int myarray[25] = {2,7,9,3,1};  
     vector<vector<int>> myvector(myarray , myarray+5);  
} 
void rotate(vector<vector<int>>& matrix) {
	int n = matrix.size();
	int i,j;
	int temp;
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i; j++) {
			temp = matrix[i][j];
			matrix[i][j] = matrix[n-1-j][n-1-i];
			matrix[n-1-j][n-1-i] = temp;
		}
	}
	for(i=0;i<n/2;i++) {
		for(j=0;j<n;j++){
			temp = matrix[i][j];
			matrix[i][j] = matrix[n-1-i][j];
			matrix[n-1-i][j] = temp;
		}
	}
	
}