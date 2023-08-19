#pragma once
#include "clsDblLinkedList.h"
template<typename T> class clsQueue 
{
protected:
	clsDblLinkedList <T> _MyList;
public:
	void Push(T Value) {
		_MyList.InsertAtEnd(Value);
	}
	void Pop() {
		_MyList.DeleteFirstNode();
	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(_MyList.Size()-1);
	}
	void Print() {
		_MyList.PrintList();
	}

};
