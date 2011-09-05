/*
 *  Actor.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 17/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Actor.h"
#include "View.h"

void Actor::notify_views()
{
	vector<View*>::iterator iter;
    for (iter = observing_views.begin(); iter != observing_views.end(); ++iter)
        (*iter)->notify(this);
}

void Actor::register_view(View* const v)
{
	observing_views.push_back(v);
}