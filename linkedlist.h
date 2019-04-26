// Danny Cristea
// Section 1
//begin linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

using namespace std;

struct node 
{
	int data;
	node * next;
};

class linkedlist 
{
private:
	node * head;
	int inline count(); // RECURSIVE
	int inline sum(); // RECURSIVE
	void inline printList(node* &head);
	void inline insert(node* &prev, int num);

public:
	inline linkedlist();
	inline ~linkedlist(); // RECURSIVE
	void inline addToFront(int n);
	double inline average(); // uses sum and count functions
	void inline writeInorder(string & file);
	void inline writeReversed(string & file);
};
#endif // end linkedlist.h