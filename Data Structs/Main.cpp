#include <iostream>

#include "Stack.h"
#include "Queue.h"

int main()
{
	//Showcase of stack
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

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

	//showcase of Queue
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

	return 0;
}