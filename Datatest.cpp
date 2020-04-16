#include "Stack.cpp"
#include "Stack.h"

int main(){
	Stack stack;
	stack.push(18);
	stack.push(1);
	stack.push(6);
	stack.push(4);
	stack.push(15);
	stack.push(3);
	stack.push(13);
	stack.push(2);
	stack.pop();
	stack.toString();
	std::cout<<"\n";
	stack.peek();
	std::cout<<"\n"<<stack.isEmpty();
	return 0;
}