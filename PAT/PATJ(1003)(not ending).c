# include<iostream>
# include <algorithm>
 using namespace std;
 int cityNum ,roadNum, myCity,needCity;
 
 int map[500][500],weight[500],dis[500],num[500];
 const inf = 99999999;
 int main(){
 	cin>>cityNum>>roadNum>>myCity>>needCity;
 	for(int i=0,i<roadNum,i++){
	 	cin>>weight[i];
	 }
 	fill(map[0],map[0]+500*500,inf);
 	