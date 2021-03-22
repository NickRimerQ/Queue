#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Queue
{	
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data_ = T(), Node* pNext_ = nullptr)
		{
			data = data_;
			pNext = pNext_; 
		}
	};

	int Size;
	Node<T>* head;
	Node<T>* tail;

public:
	Queue();
	~Queue();
	T Head();
	T Tail();
	void push_back(T data);
	void pop_front();
	void clear();
	bool Empty();
	int retSize();
};