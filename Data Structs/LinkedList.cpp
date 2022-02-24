#include <string>
#include <iostream>
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
	: _front{ nullptr }, _back{ nullptr }, _length{ 0 }
{
}

bool LinkedList::isEmpty()
{
	if (_front == nullptr)						//list is empty if front is empty
		return true;
	else
		return false;
}

void LinkedList::insertFront(std::string value)
{
	Node* newNode = new Node;					//create new node
	newNode->_data = value;						//set data to value

	if (isEmpty())								//if list is empty
	{
		_front = newNode;						//set front to new node
		_back = newNode;						//set back to new node
	}
	else
	{											//if list isn't empty
		newNode->_next = _front;				//set new node's next pointer to current fron
		_front->_previous = newNode;			//set front's previous pointer to new node
		_front = newNode;						//set new node to front
	}
	_length++;									//update number of elements	
}	

void LinkedList::insertBack(std::string value)
{
	Node* newNode = new Node;					//create new node
	newNode->_data = value;						//set data to value

	if (isEmpty())								//if list is empty
	{
		_front = newNode;						//set front to new node
		_back = newNode;						//set back to new node
	}
	else
	{
		Node* lastNode = _back;					//get current last node
		_back = newNode;						//set back to new node
		_back->_previous = lastNode;			//set new node's previous pointer to current last node
		lastNode->_next = newNode;				//set current last node's next pointer to new node
	}
	_length++;									//update number of elements
}

void LinkedList::insertAt(int pos, std::string value)
{
	Node* newNode = new Node;					//create new node
	newNode->_data = value;						//set data to value
	
	if (isEmpty())								//if list is empty
	{
		std::cout << "List is empty, inserting at front";
		_front = newNode;						//set front to new node
		_back = newNode;						//set back to new node
	}
	else
	{
		Node* currNode = _front;				//set current node for traversal to front
		bool isEnd = false;						//check to determine if position is end of list		

		if (pos > _length)						//if position is greater than the length of the list
		{
			pos = _length - 1;					//set position to length - 1 (last element in list)
			isEnd = true;
		}

		for (int i = 0; i < pos; i++)			//loop to traverse list until reaching desired node
		{
			currNode = currNode->_next;			//cycle current node
		}

		if (pos == 0)							//if position is the start of the list
		{
			_front = newNode;					//set the front of the list to new node
			currNode->_previous = newNode;		//set the current node previous pointer to the new node
			newNode->_next = currNode;			//set the new node's next pointer to current front
		}
		else if (isEnd)							//if position is end of list
		{
			currNode->_next = newNode;			//set the current end of list's next pointer to the new node
			newNode->_previous = currNode;		//set the new node's previous pointer to the current end of list
			_back = newNode;					//set back to new node
		}
		else									//if no other conditions are met
		{
			newNode->_next = currNode->_next;	//set the new node's next pointer to the current node
			currNode->_next = newNode;			//set current node to 

			newNode->_previous = currNode;		//set new node's previous pointer to current node
			newNode->_next->_previous = newNode;//set the previous pointer for the next node in the list to point at the new node
		}
	}
	_length++;									//update number of elements
}

std::string LinkedList::deleteFront()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return "\0";
	}
	std::string dataAtNode = _front->_data;		//get data at front node
	Node* cleanup = _front;						//create pointer to current front node
	_front = _front->_next;						//set front to next in list
	delete cleanup;								//delete current front node
	_length--;									//update number of elements
	return dataAtNode;							//return data stored at node
}

std::string LinkedList::deleteBack()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return "\0";
	}
	
	std::string valueAtNode = _back->_data;		//get data at back node
	Node* cleanup = _back;						//create pointer to current back node
	_back = _back->_previous;					//set back to previous node
	delete cleanup;								//delete current back node
	_length--;									//update number of elements
	return valueAtNode;							//return data stored at node
}

void LinkedList::printList()
{
	if(isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return;
	}

	Node* currNode = _front;
	for (int i = 0; i < _length; i++)
	{
		std::cout << currNode->_data << "\n";
		currNode = currNode->_next;
	}
}