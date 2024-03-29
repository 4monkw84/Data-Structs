#pragma once

#include <string>
#include "Node.h"

class Stack {
	Node* _top;
	int _length;
	bool isEmpty();

public:
	Stack();
	void push(std::string);
	std::string pop();
	std::string peek();
	void printStack();
};