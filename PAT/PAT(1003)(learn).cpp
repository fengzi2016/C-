# include<iostream>
# include <algorithm>
 using namespace std;
 int cityNum ,roadNum, myCity,needCity;
 int map[500][500],weight[500],dis[500],rnum[500],tnum[500];
 bool visit[500]={false};
 const int inf = 9999999;
 int main(){
 	cin>>cityNum>>roadNum>>myCity>>needCity;
 	int i;
 	for(i=0;i<cityNum;i++){
	 	cin>>weight[i];
	 }
 	fill(map[0],map[0]+500*500,inf);
 	fill(dis,dis+500,inf);
 	int city1,city2,len;
 	for(i=0;i<roadNum;i++){
	 	cin>>city1>>city2>>len;
	 	map[city1][city2] = map[city2][city1]=len;
	 }
	 dis[city1]=0;
	 tnum[city1] = weight[city1];
	 rnum[city1] = 1;
	 int j;
	 for(i=0;i<cityNum;i++){
 		int u = -1, minn = inf;
 		for(j=0;j<cityNum;j++){
		 	if(visit[j] == false && dis[j]<minn){
	 			u = j;
	 			minn = dis[j];
	 			
	 		}
		 }
		 if(u = -1) break;
		 visit[u] = true;
		 int v;
		 for(v = 0;v<cityNum;v++){
 			if(visit[v] == false && map[u][v] != inf){
			 	if(dis[u]+map[u][v]<dis[v]){
	 				dis[v] = dis[u] + map[u][v];
	 				rnum[v] = rnum[u];
	 				tnum[v] = tnum[u] + weight[v];
	 			}else if(dis[u]+map[u][v] == dis[v]){
			 		rnum[v]= rnum[v]+rnum[u];
			 		if(tnum[u]+weight[v]>weight[v]){
		 				tnum[v] = tnum[u]+weight[v];
		 			}
			 	}
				 
			 }
 		}
 	}
 	cout<<rnum[city2]<<" "<<tnum[city2];
    return 0;
 }
 	
	