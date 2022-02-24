#pragma once

#include <string>
#include "Node.h"

class Queue {
	Node* _first;
	Node* _last;
	int _length;

public:
	Queue();
	bool isEmpty();
	void push(std::string);
	std::string pop();
	std::string peek();
	void printQueue();
};