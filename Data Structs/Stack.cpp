#include <string>
#include <iostream>

#include "Stack.h"

Stack::Stack() 
	: _top{ NULL }, _length{ 0 }
{
}

bool Stack::isEmpty()
{
	if (_top == NULL)
		return true;
	else
		return false;
}

void Stack::push(std::string value) 
{
	Node* newNode = new Node;
	newNode->_data = value;
	newNode->next = _top;
	_top = newNode;
	_length++;
}

std::string Stack::pop()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, stack is empty.\n" << std::endl;
		return "\0";
	}

	std::string valueAtNode = _top->_data;
	Node* cleanup = _top;
	_top = _top->next;
	delete cleanup;
	_length--;
	return valueAtNode;
}

std::string Stack::peek()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, stack is empty.\n";
		return "\0";
	}

	return _top->_data;
}