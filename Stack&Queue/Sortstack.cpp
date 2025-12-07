#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void sortedinsert(stack<int> &stack ,int num){

	if(stack.empty( ) || !stack.empty() && stack.top () < num){
		stack.push(num);
		return;
	}
	int n = stack.top();
	stack.pop();
	sortedinsert(stack , num);
	stack.push(n);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int num = stack.top();
	stack.pop();
	sortStack(stack);
	sortedinsert(stack , num);

}
int main(){
     stack<int> s1;
     s1.push(1);
     s1.push(19);
     s1.push(18);
     s1.push(14);
     s1.push(11);
     s1.push(13);
     sortStack(s1);

}