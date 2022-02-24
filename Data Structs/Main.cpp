#include <iostream>

#include "Stack.h"

int main()
{
	Stack example;
	example.push("line 1");
	example.push("line 2");
	std::cout << example.peek() << "\n";
	example.pop();
	std::cout << example.peek() << "\n";
	example.pop();
	example.pop();
}