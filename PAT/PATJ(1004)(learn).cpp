// ����:
// n ������� m ��Ҷ�ӽ������  
//ID ��Ҷ�ӽ�� K �˽�㺢������ ID[i] ��Ҷ�ӽ�㺢�ӽ��ID
//�����
//ÿһ��Ҷ�ӽ�������

#include "iostream"
using namespace std;
//����ṹ��LRTree,��������layer,��ǰ����currentChild,��ǰ�����ұߵ��ֵܺ���rightBrother,��ʼ��LRTree�Ĺ��캯��LRTree(),��ʼ��ֵ����LRTree(int,int,int)
struct LRTree 
{
	int layer;
	int currentChild;
	int rightChild;
	LRTree(){
		layer = 0;
		currentChild = 0 ;
		rightChild = 0;
	}
	LRTree(int l,int c,int r){
		layer = l;
		currentChild = c;
		rightChild = r;
	} 
};
int  noChildNode[102] = {0};
int  maxLayerNum = 0;
void memberInput(LRTree explamTree[]){
	int ID,K,i;
	cin>>ID>>K>>explamTree[ID].currentChild;
	ID = explamTree[ID].currentChild;
	for(i = 1;i<K;i++){
		cin>>explamTree[ID].rightChild;
		ID = explamTree[ID].rightChild;
	}
}
void updateLayers(LRTree explamTree[],const int ID,const int currentLayer){
	int i = ID;
	if(currentLayer>maxLayerNum){
		maxLayerNum = currentLayer;
	} 
	do{
		explamTree[i].layer = currentLayer;
		if(explamTree[i].currentChild!=0){
			//�ݹ� 
			updateLayers(explamTree,explamTree[i].currentChild,currentLayer+1);
			
		}else{
			
			noChildNode[currentLayer]++;
		}
		i = explamTree[i].rightChild;
		
	}while(i!=0);
}
void printLayerNum(){
	int i = 1;
	while(i<(maxLayerNum)){
		cout<<noChildNode[i]<<" ";
		i ++ ;
	}
	cout<< noChildNode[i]<<endl;
}
int main(){
	int n,m;
	//��ʼ��һ��LTRTree 000
	LRTree explamTreeInit(0,0,0);
 	LRTree explamTree[101];
 	int i;
 	for(i=0;i<101;i++){
	 	explamTree[i] = explamTreeInit;
	 	noChildNode[i] = 0;
	 }
	 noChildNode[i] = 0;
	maxLayerNum = 0;
	cin>>n>>m;
	// n ������� m ��Ҷ�ӽ������  
	if(n==1){
		cout<<1<<endl; 
	}else{
		for(i=0;i<m;i++){
			memberInput(explamTree);
		}
		updateLayers(explamTree,01,1);
		printLayerNum();
	}
	return 0;
}