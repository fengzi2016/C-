# include <cstring>
# include <iostream>
# include <string.h>
using namespace std;
struct Info{
	string ID;
	string start;
	string end;
};

int main(){
	int n;
	cin>>n;
	int i;
	Info a[n];
	for(i=0;i<n;i++){
		cin>>a[i].ID;
		cin>>a[i].start;
		cin>>a[i].end;
	}
	string first,last;
	first = a[0].start;
	last = a[0].end;
	int findex ,lindex;
	findex = lindex = 0;
	for(i=1;i<n;i++){
		if(a[i].start<first){
			first = a[i].start;
			findex = i;
		}
		if(a[i].end>last){
			last = a[i].end;
			lindex = i;
		}
	}
 	cout<<a[findex].ID<<" "<<a[lindex].ID;
} 