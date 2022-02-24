#include <string>
#include <iostream>

#include "Queue.h"
#include "Node.h"

Queue::Queue()
	: _front{ nullptr }, _back{ nullptr }, _length{ 0 }
{
}

bool Queue::isEmpty()
{
	if (_front == nullptr)				//queue is empty if _first is empty
		return true;
	else
		return false;
}

void Queue::push(std::string value)
{
	Node* newNode = new Node;		//create new node
	newNode->_data = value;			//set value at new node

	if (isEmpty())					//check if new node is first in queue
		_front = newNode;			//if first in queue, set it as starting node
	else							
		_back->_next = newNode;		//if not first in queue, set _next for last in queue to new node

	_back = newNode;				//set last to new node
	_length++;						//update current number of nodes
}

std::string Queue::pop()
{
	if (isEmpty())												//check if queue is empty before popping 
	{
		std::cout << "Invalid action, Queue is empty.\n";
		return "\0";
	}

	std::string valueAtNode = _front->_data;					//get data before node deletion
	Node* cleanup = _front;										//set pointer to be deleted
	_front = _front->_next;										//set first to next in queue
	delete cleanup;												//delete popped node
	_length--;													//update current number of nodes
	return valueAtNode;											//return value of popped node
}

std::string Queue::peek()
{
	if (isEmpty())												//check if queue is empty before peeking
	{
		std::cout << "Invalid action, Queue is empty.\n";
		return "\0";
	}

	return _front->_data;										//return value of front of queue
}

void Queue::printQueue()
{
	if (isEmpty())												//check if queue is empty before printing
		std::cout << "Invalid action, Queue is empty.\n";

	Node* targetToPrint = _front;								//set target to first in queue
	for (int i = 0; i < _length; i++)
	{
		std::cout << targetToPrint->_data << "\n";
		targetToPrint = targetToPrint->_next;					//set target to current element's next
	}
}