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
	int changeIndex;
	int result;
	for(i=0;i<allNum;i++){
		if(in[i].index===startInd){
			changeIndex=in[i].index;
			result1=findEle(in,in[i].next,allNum);
			cout<<in[i].adress<<' '<<in[i].index<<' '<<in[result1].adress<<endl;
			while(changeIndex>=1){
				--changeIndex;
				result=	findEle(in,in[i].next,allNum);
			    cout<<in[result].adress<<' '<<in[result].index<<' '<<in[result].next<<endl;
			}
			
		}
	}	
	
}
int findEle(jiedian arr[],int next,int len){
	int i,j;
	for(i=0;i<len;i++){
		if(arr[i].adress==next)
			return i;
	}
}
