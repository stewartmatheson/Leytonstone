/*
 *  Actor.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 17/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ACTOR_H
#define ACTOR_H

#include "View.h"
#include <vector>
#include "Model.h"

class Actor
{
	std::vector<View*> observing_views;
public:
	void register_view(View* const v);
	void notify_views();
};

#endif