#pragma once
#include "Node.h";

class DoubleLIst
{
public:
	Node* start;
	Node* end;
	int count;

	DoubleLIst() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~DoubleLIst() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtEnd(int value) {
		Node* new_node = new Node();
		new_node->value = value;

		if (isEmpty()) { 
			start = new_node;
			end = new_node;
		}
		else { 
			end->next = new_node;
			end = new_node;
		}
		count++;
	}

	void InsertAtStart(int value) {
		Node* new_node = new Node();
		new_node->value = value;

		if (isEmpty()) { 
			start = new_node;
			end = new_node;
		}
		else { 
			new_node->next = start;
			start = new_node;
		}
		count++;
	}

	bool isEmpty() {
		return count == 0;
	}
};

