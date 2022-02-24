#pragma once

#include <string>
#include "Node.h"

class Queue {
	Node* _front;
	Node* _back;
	int _length;

public:
	Queue();
	bool isEmpty();
	void push(std::string);
	std::string pop();
	std::string peek();
	void printQueue();
};