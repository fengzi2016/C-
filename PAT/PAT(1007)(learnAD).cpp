
#include <iostream.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,sum = 0,tempSum = 0,tempi = 0 ,tempj = 0,start = 0,end = n-1; 
	int arr[10001];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(tempSum>=0){
			//��������кʹ���0����һֱ�� 
			tempSum += arr[i];
			tempj = i;
		}else{
			//���С��0����˵��arr[i]<0��������ô�Ӷ����С����������һ�������� 
			tempSum = arr[i];
			tempi = i;
			tempj = i;
		}
		if(tempSum>sum||(tempSum == 0 && end == n-1)){
			sum = tempSum;
			start = tempi;
			end = tempj;
		}
	}
	cout<<sum<<" "<<arr[start]<<" "<<arr[end];
}