#include <iostream>
#include "Stack.h"

Stack :: Stack(){
	head = NULL;
}

void Stack :: push(int date){
	Node*temp = new Node();
	temp->setLoad(date);
	temp->setNext(head);
	head = temp;
}

int Stack :: pop(){
	if(isEmpty())
		return -1;
	else{
		Node*temp = new Node();
		int ourValue = temp->getLoad();
		head = head->getNext();
		free(temp);
		return ourValue;
	}
}

void Stack :: toString(){
	std::cout<<"[";
		Node * temp = head;
		while(temp!=NULL){
			if(temp->getNext()==NULL)
				std::cout<<temp->getLoad();
			else
				std::cout<<temp->getLoad()<<",";
		temp = temp->getNext();
	    }
	std::cout<<"]";
}

bool Stack :: isEmpty(){
	return (head ==NULL) ? true : false;
}

void Stack :: peek(){
	if(head==NULL)
		std::cout<<"It's empty";
	else
		std::cout<<head->getLoad();
}