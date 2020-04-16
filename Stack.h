#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include "Node.h"
#include "Node.cpp"

class Stack{
	protected:
		Node*head;
	public:
		Stack();
		void push(int date);
		int pop();
		void toString();
		bool isEmpty();
		void peek();
};

#endif