# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <map>
# include <vector>
# include <iostream>
using namespace std;
//list=>{01:[1,2,3]} 



 
map<int ,vector<int> > list;
int record[101]={0};
void DFS(int id,int level){
	if(list[id].empty()){
		++record[level];
		return;
	}
	vector<int>::iterator index = list[id].begin();
	for(;index!=list[id].end();++index){
		DFS(*index,level+1);
	}
}
int main(){
	int n,m,id,k,sid,i,noChild,countNoChild;
	cin>>n>>m;
	noChild = n-m;
	while(m--){
		cin>>id>>k;
		while(k--){
			cin>>sid;
			list[id].push_back(sid);//向vector尾部添加一个sid 
		}
	}
	DFS(1,0);
	cout<<record[0];  
	countNoChild = record[0];
	for(i=1;countNoChild<noChild;i++){
		cout<<" "<<record[i];
		countNoChild+=record[i];	
	}
	return 0;
	
}
 
