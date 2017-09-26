# include <iostream>
class jiedian{
	public:
	int adress;
	int index;
	int next;
};
int main(){
	int startJie,allNum,startInd;
	cin>>startJie>>allNum>>startInd;
	jiedian in[allNum];
	int i,j,k;
	for(i=0;i<allNum;i++){
		cin>>in[i].adress>>in[i].index>>in[i].next;
	}
	jiedian find[startInd];
	
}