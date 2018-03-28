
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
			//如果子序列和大于0，则一直加 
			tempSum += arr[i];
			tempj = i;
		}else{
			//如果小于0，则说明arr[i]<0，不管怎么加都会变小，所以新启一个子序列 
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