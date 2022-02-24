#include <iostream>

#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

int main()
{
	//Examples of all three included data types below, uncomment section you wish to preview

	//showcase of stack
	/*
	std::cout << "STACK SHOWCASE:\n";

	Stack exampleStack;

	exampleStack.push("line 1");
	exampleStack.push("line 2");
	exampleStack.push("line 3");

	std::cout << "Printing everything in stack\n";

	exampleStack.printStack();

	std::cout << "Popping top: " << exampleStack.pop() << std::endl;

	std::cout << "Peek at top: " << exampleStack.peek() << std::endl;

	std::cout << "Popping top: " << exampleStack.pop() << std::endl;
	std::cout << "Popping top: " << exampleStack.pop() << std::endl;

	std::cout << "Printing empty stack\n";
	exampleStack.printStack();
	*/

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

	//showcase of Queue
	/*
	std::cout << "QUEUE SHOWCASE:\n";

	Queue exampleQueue;

	exampleQueue.push("first");
	exampleQueue.push("second");
	exampleQueue.push("third");

	std::cout << "Printing everything in queue\n";
	exampleQueue.printQueue();

	std::cout << "Popping queue: " << exampleQueue.pop() << std::endl;
	std::cout << "Popping queue: " << exampleQueue.pop() << std::endl;
	std::cout << "Popping queue: " << exampleQueue.pop() << std::endl;

	std::cout << "Peeking at front of empty queue: " << exampleQueue.peek() << std::endl;
	*/

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\

	//showcase of Linked List
	
	std::cout << "LINKED LIST SHOWCASE:\n";

	LinkedList exampleList;

	exampleList.insertBack("one");
	exampleList.insertBack("two");
	exampleList.insertBack("three");

	exampleList.insertFront("zero");

	exampleList.insertAt(10, "end");

	std::cout << "\nPrinting list:\n";
	exampleList.printList();

	std::cout << "\nDeleting last element: " << exampleList.deleteBack() << std::endl;
	std::cout << "\nDeleting first element: " << exampleList.deleteFront() << std::endl;

	std::cout << "\nPrinting list:\n";
	exampleList.printList();
	

	return 0;
}