#include "Header.h"

template<typename T>
Queue<T>::Queue()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
}

template<typename T>
Queue<T>::~Queue()
{
	clear();
}

template<typename T>
T Queue<T>::Head()
{
	return head->data;
}

template<typename T>
T Queue<T>::Tail()
{
	return tail->data;
}

template<typename T>
void Queue<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else if (tail == nullptr)
	{
		tail = new Node<T>(data);
		head->pNext = tail;
	}
	else
	{
		Node<T>* temp = tail;
		tail = new Node<T>(data);
		temp->pNext = tail;
	}
	Size++;
}

template<typename T>
void Queue<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void Queue<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}

template<typename T>
bool Queue<T>::Empty()
{
	if (Size > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template<typename T>
int Queue<T>::retSize()
{
	return Size;
}
