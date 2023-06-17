#include "linked_list.h"
#include <cstddef>
#include <iostream>
using namespace std;

Node::Node()
{
	data = 0;
	next = NULL;
}
linkedList::linkedList()
{
	head = NULL;
	tail = NULL;
}
void linkedList::insertFirst(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	if (isEmpty())
	{
		newNode->next = NULL;
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}
void linkedList::insertLast(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	if (isEmpty())
	{
		head = tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}
void linkedList::insert_Position(int item,int newValue)
{
	if (isEmpty()) {
		insertFirst(newValue);
		return;
	}
	if (search(item))
	{
		Node* newNode = new Node();
		newNode->data = newValue;
		Node* temp = head;
		while (temp != NULL && temp->next->data != item)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	else
		cout << "Item not found\n";
}
void linkedList::deleteFirst()
{
	if (isEmpty())
		cout<<"Can’t delete because the list is empty\n";
	else if (length() == 1)
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		Node* curr=head;
		head = head->next;
		delete curr;
	}
}
void linkedList::deleteLast()
{
	Node* prev = head;
	Node* curr = head->next;
	while (curr->next != tail)
	{
		prev = curr;
		curr = curr->next;
	}
	delete curr;
	prev->next = NULL;
	tail = prev;
}

bool linkedList::search(int value)
{
	bool found = false;
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == value)
			found = true;
		temp = temp->next;
	}
	return found;
}

bool linkedList::isEmpty()
{
	return head == NULL;
}

int linkedList::length()
{
	int count = 0;
	Node* temp = head;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

void linkedList::display()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
