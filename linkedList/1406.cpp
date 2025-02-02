#include <iostream>
#include <algorithm>
#include <stdlib.h>

class node 
{
private:
	char ch;
	node* next;
	node* prev;
public:
	node();
	node(char ch, node* prev, node* next);
	~node();

	char getCh();
	node* getNext();
	node* getPrev();
};

node::node(){};
node::node(char ch, node* prev, node* next) {

}
node::~node(){
	
}

int main()
{

}