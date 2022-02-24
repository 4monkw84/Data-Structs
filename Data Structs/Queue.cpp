#include <string>
#include <iostream>

#include "Queue.h"
#include "Node.h"

Queue::Queue()
	: _first{ NULL }, _last{ NULL }, _length{ 0 }
{
}

bool Queue::isEmpty()
{
	if (_first == NULL)				//queue is empty if _first is empty
		return true;
	else
		return false;
}

void Queue::push(std::string value)
{
	Node* newNode = new Node;		//create new node
	newNode->_data = value;			//set value at new node

	if (isEmpty())					//check if new node is first in queue
		_first = newNode;			//if first in queue, set it as starting node
	else							
		_last->_next = newNode;		//if not first in queue, set _next for last in queue to new node

	_last = newNode;				//set last to new node
	_length++;						//update current number of nodes
}

std::string Queue::pop()
{
	if (isEmpty())												//check if queue is empty before popping 
	{
		std::cout << "Invalid action, Queue is empty.\n";
		return "\0";
	}

	std::string valueAtNode = _first->_data;					//get data before node deletion
	Node* cleanup = _first;										//set pointer to be deleted
	_first = _first->_next;										//set first to next in queue
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

	return _first->_data;										//return value of front of queue
}

void Queue::printQueue()
{
	if (isEmpty())												//check if queue is empty before printing
		std::cout << "Invalid action, Queue is empty.\n";

	Node* targetToPrint = _first;								//set target to first in queue
	for (int i = 0; i < _length; i++)
	{
		std::cout << targetToPrint->_data << "\n";
		targetToPrint = targetToPrint->_next;					//set target to current element's next
	}
}