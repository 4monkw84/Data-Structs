#pragma once

#include <string>
#include "Node.h"

class LinkedList {
private:
	Node* _head;
	int _length = 0;

public:
	LinkedList();

	bool isEmpty();

	void insertFront(std::string);
	void insertBack(std::string);

	std::string deleteFront();
	std::string deleteBack();

	void printList();
};