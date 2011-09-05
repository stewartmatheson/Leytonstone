/*
 *  Observer.h
 *  Leytonstone
 *
 *  this code downloaded form http://www.codeproject.com/KB/architecture/observer_with_templates.aspx
 */

#ifndef OBSERVER_H
#define OBSERVER_H

#include "Subject.h"

template <class T>
class Observer
{
public:
	Observer() {}
	virtual ~Observer() {}
	virtual void update(T *subject)= 0;
};

#endif