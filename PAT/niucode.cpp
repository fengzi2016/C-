include <iostream>
include <algorithm>
using namespace std;

int main() {
    int i,j,k;
    int n,m,c;
    cin>>n>>m>>c;
    int d = c+1;
    int s = n+1;
    int a[s][d];
    int temp;
    for( i = 0 ;i < n; i++) {
        cin>>a[i][0];
        if(a[i][0] != 0) {
             for( j = 1 ;j < d; j++) {
                 cin>>temp;
                 if(temp==j) {
                     a[i][j] = temp;
                 } else {
                     a[i][j] = 0;
                 }
            }
        } 
    }
    for( j=0;j<d;j++) {
    	
        a[s-1][j] = a[0][j];
        
    } 
    for(i)
    int count = 0;
	k = 0;
    for(j = 1; j< d; j ++) {
        for(i = 0; i< s ; i++)  {
            if(a[i][j] == j) {
                k++;
            }
            if(k>=c) {
                count++;
                break;
            }
        }
    }
    
    cout<<count;
 
}
int main2() {
    string p;
    cin>>p;
    int n;
    cin>>n;
    int i,j,k;
    int pos,len;
    string temp;
	string re ;
    for(i = 0;i < n;i++) {
    	re = "";
        cin>>pos;
        cin>>len;
        temp = p.substr(pos,len);
        for(j = len-1 ;j>=0;j--) {
            re += temp[j];
        }
        cout<<"-:"+re<<endl;
      	cout<<"+:"+p.substr(pos+len-1)<<endl;
        p = p.substr(0,pos+1)+re+p.substr(pos+len-1);
        cout<<p<<endl;
    
   /* cout<<p;
    return 0;*/
}
}

using namespace std;
int main3() {
     int n,s,L;
     cin>>n>>s>>L;
     int count = 0;
    if(n==0){
        count = 0;
    }else{
    int temp,i,j,k;
    k = 0;
    while(n>0) {
       i =(L-s)/(s+1) + 1;
        if(n>=i){
             k = 1;
             n -= i;
           if(i%13 == 0) {
               i --;
               n ++;
            }
            
            count ++ ;
            if(n == 13 && i>=13) {
            	cout<<"into"<<endl;
                count += 2;
                break;
            }
          }else if(n%13 == 0  && k==0) {
            count = 2;
            break;
        }else if(n%13 !=0 && k==0){
            count = 1;
            break;
        }else if( k==1 ) {
            	count++;
            	break;
            
        }
      }
    }
    
    cout<<count;
    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int dt[100][100][100][100];
int x,y,bx,by,tx,ty;
int m,n;
vector<vector<char>>mm;
bool valid(int x,int y) {
	if(x>=0 && x<m && y>=0 && y<n && mm[x][y]!='#') {
		return true;
	}
	return false;
}
int main() {
	int i,j;
	cin>>m>>n;
	mm = vector<vector<char>>(m,vector<char>(n));
	for(i=0;i<m;i++) {
		for(j =0;j<n;j++) {
			char t;
			cin>>t;
			switch(t) {
				case 'S' : x=i;y=j;break;
				case 'O': bx=i;by=j;break;
				case 'E':tx=i;ty=j;break; 
			}
			mm[i][j]=t;
		}
	}
	  int next[4][2] = {
		{-1,0},{1,0},{0,1},{0,-1}
	};
	queue<vector<int>> que;
	que.push({
		x,y,bx,by
	});
	dt[x][y][bx][by] = 1;
	//dt[nx][ny][bx][by] 标记是否已经到过 
	while(!que.empty()) {
		vector<int> t = que.front();
		que.pop();
		x = t[0];
		y = t[1];
		bx = t[2];
		by = t[3];
		for(i = 0;i<4;i++) {
			int nx = x+next[i][0],ny=y+next[i][1];
			int nnx = nx+next[i][0],nny = ny+next[i][1];
			if(valid(nx,ny) && (nx!=bx ||ny!=by) && dt[nx][ny][bx][by]==0){
				dt[nx][ny][bx][by]=dt[x][y][bx][by]+1;
				que.push({
					{
						nx,ny,bx,by
					}
				});
				continue;
            }else if(nx==bx && ny==by && valid(nnx,nny)&& dt[nx][ny][nnx][nny] == 0) {
			dt[nx][ny][nnx][nny] = dt[x][y][bx][by]+1;
			if(mm[nnx][nny]=='E') {
				cout<<dt[nx][ny][nnx][nny]-1;
				return 0;
			}
			que.push({
				nx,ny,nnx,nny
			});
		}
	}
    }
	cout<<-1;
	return 0; 
}


 