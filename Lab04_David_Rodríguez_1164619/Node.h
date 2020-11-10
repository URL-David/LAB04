#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node* prev;

	Node() { next = nullptr; prev = nullptr; };
	~Node() { };
};

