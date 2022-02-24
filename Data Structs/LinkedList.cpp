#include <string>
#include <iostream>
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
	: _head { nullptr }, _length { 0 }
{
}

bool LinkedList::isEmpty()
{
	if (_head == nullptr)
		return true;
	else
		return false;
}

void LinkedList::insertFront(std::string value)
{
	Node* newNode = new Node;			//create new node
	newNode->_data = value;					//set node value

	if (isEmpty())								//check if new node is first in list
		_head = newNode;						//if first, set as head
	else
	{
		Node* currHead = _head;				//if not first, get current head
		newNode->_next = _head;					//set new node's next node to current head
		_head = newNode;						//make new node head
	}
	_length++;									//add 1 to list length
}	

void LinkedList::insertBack(std::string value)
{
	Node* newNode = new Node;			//create new node
	newNode->_data = value;					//set node value

	if (isEmpty())								//check if new node is first in list
		_head = newNode;						//if first, set as head
	else
	{
		Node* currNode = _head;				//start traversal at head
		while (currNode->_next != nullptr)		//while the current node has a sequential node
			currNode = currNode->_next;			//cycle through the list
		currNode->_next = newNode;				//when at last element, set its next pointer to the new node
	}
	_length++;									//add 1 to list length
}

std::string LinkedList::deleteFront()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return "\0";
	}
	std::string valueAtNode = _head->_data;
	Node* cleanup = _head;
	_head = _head->_next;
	delete cleanup;
	_length--;
	return valueAtNode;
}

std::string LinkedList::deleteBack()
{
	if (isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return "\0";
	}

	Node* currNode = _head;
	while (currNode->_next != nullptr)
		currNode = currNode->_next;
	
	std::string valueAtNode = currNode->_data;
	delete currNode;
	_length--;
	return valueAtNode;
}

void LinkedList::printList()
{
	if(isEmpty())
	{
		std::cout << "Invalid action, list is empty\n";
		return;
	}

	Node* currNode = _head;
	for (int i = 0; i < _length; i++)
	{
		std::cout << currNode->_data << "\n";
		currNode = currNode->_next;
	}
}