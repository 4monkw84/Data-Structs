#pragma once

#include <string>

class Node {
public:
	std::string _data;
	Node* _next = nullptr;
	Node* _previous = nullptr;
};