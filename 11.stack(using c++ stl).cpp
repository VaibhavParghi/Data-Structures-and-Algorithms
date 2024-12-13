#include<bits/stdc++.h>
using namespace std;
int main(){

	
	stack<string>stackk;

	stackk.push("first element");
	stackk.push("second element");
	stackk.push("third element");
	
	///loop will run till the stack is not empty
	while(!stackk.empty()){
		///print the top element in the stack;
		cout<<stackk.top()<<"\n";
		
		///pop the top element
		stackk.pop();
	}

	return 0;
}
/*
output : 

third element
second element
first element


*/
