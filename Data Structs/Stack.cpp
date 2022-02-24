#include <string>
#include <iostream>

#include "Stack.h"
#include "Node.h"

Stack::Stack() 
	: _top{ NULL }, _length{ 0 }
{
}

bool Stack::isEmpty()
{
	if (_top == NULL)	//stack is empty if top is empty
		return true;
	else
		return false;
}

void Stack::push(std::string value) 
{
	Node* newNode = new Node;	//create new node
	newNode->_data = value;		//set value at new node
	newNode->_next = _top;		//set _next to current top of stack
	_top = newNode;				//make new node the top of stack
	_length++;					//update stack size
}

std::string Stack::pop()
{
	if (isEmpty())											//check if stack is empty before popping 
	{
		std::cout << "Invalid action, stack is empty.\n";
		return "\0";
	}

	std::string valueAtNode = _top->_data;					//get data before node deletion
	Node* cleanup = _top;									//set pointer to be deleted
	_top = _top->_next;										//set top to next in stack
	delete cleanup;											//delete popped node
	_length--;												//update current number of nodes
	return valueAtNode;										//return value of popped node
}

std::string Stack::peek()
{
	if (isEmpty())											//check if stack is empty before peeking
	{
		std::cout << "Invalid action, stack is empty.\n";
		return "\0";
	}

	return _top->_data;										//return value of top of stack
}

void Stack::printStack()
{
	if (isEmpty())											//check if stack is empty before printing
		std::cout << "Invalid action, stack is empty.\n";

	Node* targetToPrint = _top;								//set target to top of stack
	for (int i = 0; i < _length; i++)
	{
		std::cout << targetToPrint->_data << "\n";
		targetToPrint = targetToPrint->_next;				//set target to next in stack
	}
}