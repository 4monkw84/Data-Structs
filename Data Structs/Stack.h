#pragma once

#include <string>

class Node {
public:
	std::string _data;
	Node* next;
};

class Stack {
	Node* _top;
	int _length;

public:
	Stack();
	bool isEmpty();
	void push(std::string);
	std::string pop();
	std::string peek();
};