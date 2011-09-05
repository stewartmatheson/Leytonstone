/*
 *  ModelIterator.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 30/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MODEL_ITERATOR_H
#define MODEL_ITERATOR_H

#import "Model.h"
#import <vector>

class ModelIterator
{
	std::vector<Model*> models;
public:
	void push_back(Model* m);
	Model operator[](int count);
};

#endif