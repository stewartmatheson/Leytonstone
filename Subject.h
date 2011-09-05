/*
 *  Subject.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 18/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>


class Subject
{
	std::vector<observer> observers;
	void notify_observers();
public:
	void register_observer(Observer* o);
	
	
};


#endif