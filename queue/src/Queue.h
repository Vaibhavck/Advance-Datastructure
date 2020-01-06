/*
 * Queue.h
 *
 *  Created on: Jan 2, 2020
 *      Author: f10
 */

#ifndef QUEUE_H_
#define QUEUE_H_

template <class T>
class Node{
	public:
		T data;
		Node * next;
};

template <class T>
class Queue {
	Node<T> * front;
	Node<T> * rear;
public:
	Queue();
	void enque(T);
	T deque(int);
	virtual ~Queue();
};

#endif /* QUEUE_H_ */
