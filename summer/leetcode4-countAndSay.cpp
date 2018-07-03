# include <iostream>
# include <string.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string countAndSay(int n);
    cout<<countAndSay(n);
	
} 
string deal(string s) {
	if(s.length()==0) {
		return "1";
	}
	int i,count=0;
	string str = "";
	char ch = s[0];
	char countCh ;
	for(i=0;i<s.length();i++) {
		if(ch == s[i]) {
			count++;
		}else{
			countCh = count + '0';
			str += countCh;
			str += ch;
			ch = s[i];
			count = 1;
		}
	}

		
			countCh = count + '0';
			str += countCh;
			str += ch;
		
	
	return str;
}
string countAndSay(int n) {
		string result = "";
        if(n==1) {
        	return "1";
        }else{
        	while(n--) {
        		
	        	result = deal(result);
	        
	        }
        }
		return result;      
}
