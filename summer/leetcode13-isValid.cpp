#include <iostream>
#include <string>
#include <stack> 
using namespace std;
int main() {
	stack<char> res;
	string test = "{()}";
	int len = test.length();
	int i,j;
	for(i=0;i<len;i++) {
		if(test[i]=='('|| test[i]==')' || test[i]=='[' || test[i] == ']' || test[i] == '{' || test[i] == '}') {
			res.push(test[i]);		
		}
	} 
	if(res.size()%2!=0) {
		return false;
	}
	while(!res.empty()) {
		char right = res.top();
		
		res.pop();
		
		char left = res.top();
		
		res.pop();
		
		
		if(right == ']' && left != '[') {
			return false;
			cout<<"false";
		}
		if(right == '}' && left != '{') {
			return false;
			cout<<"false";
		}
		if(right == ')' && left != '(') {
			return false;
			cout<<"false";
		}
		
	}
	cout<<"true";
	return true;
	
	
}