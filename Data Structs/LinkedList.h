#pragma once

#include <string>
#include "Node.h"

class LinkedList {
private:
	Node* _front;
	Node* _back;
	int _length = 0;

public:
	LinkedList();

	bool isEmpty();

	void insertFront(std::string);
	void insertBack(std::string);
	void insertAt(int, std::string);

	std::string deleteFront();
	std::string deleteBack();

	void printList();
};