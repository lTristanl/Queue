#ifndef NODE_H_
#define NODE_H_

class Node{
	protected:
		int load;
		Node *next;
	public:
		Node(int);
		Node();
		int getLoad();
		Node*getNext();
		void setLoad(int n);
		void setNext(Node*n);
};
#endif