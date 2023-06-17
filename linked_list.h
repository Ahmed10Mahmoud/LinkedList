#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node();	
};



class linkedList
{
public:
	linkedList();
	Node* head;
	Node* tail;
	void insertFirst(int value);
	void insertLast(int value);
	void insert_Position(int item,int newValue);
	void deleteFirst();
	void deleteLast();
	bool search(int value);
	bool isEmpty();	
	int length();
	void display();
};

