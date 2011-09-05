#ifndef _UTILS_H_
#define _UTILS_H_

#include <assert.h>
#include "Box2D.h"

#define ASSERT assert
#define EPSILON 1e-6f
#define UNSED_VARIABLE(x) x

class Utils
	{
	public:
		template <typename T> static T* genRandomArray(T p_min, T p_max, T p_minDiff, int p_numElems)
		{
			T* retTab;
			
			// min smaller than max
			ASSERT(p_min < p_max);
			
			// p_min cannot be 0
			ASSERT(p_min != 0);
			
			// check for possible deadlock - thats crap find other solution
			
			ASSERT((p_min + ((T)p_numElems * p_minDiff)) < p_max);
			
			retTab = new T[p_numElems];
			
			for(int i = 0; i < p_numElems; i++)
			{
				retTab[i] = (T)0;
			}
			
			int cnt = 0;
			
			while(cnt < p_numElems)
			{
				T num = rangedRand(p_min, p_max);
				
				bool found = false;
				
				for(int i = 0; i < cnt; i++)
				{
					if((retTab[i] >= (num - p_minDiff)) && ((retTab[i] <= (num + p_minDiff))))
					{
						found = true;
						break;
					}
				}
				
				if(!found)
				{
					retTab[cnt++] = num;
				}
			}
			
			return retTab;
		}
		
		// is templetised version really necessary ??
		
		template <typename T> static T rangedRand(T min, T max)
		{
			return (T)((max - min) * rand()/(float)RAND_MAX + min);
		}
		
		template <typename T> static T interpolateLinear(T first, T second, T ratio)
		{
			return first + ((second - first) * ratio);
		}
		
		float static interpolateBezier(float first, float second, float third, float fourth, float ratio)
		{
			float ratio2 = ratio * ratio;
			float ratio3 = ratio2 * ratio;
			
			float c = 3.0f * (second - first);
			float b = 3.0f * (third - second) - c;
			float a = fourth - first - c - b;
			
			return (a * ratio3) + (b * ratio2) + (c * ratio) + first;
		}
		
		static float toDeg(float rad)
		{
			return (rad * 57.29578f);
		}
		
		static float toRad(float deg)
		{
			return (deg * 0.01745329f);
		}
		
		bool closeTo(float num0, float num1);
		static b2Vec2 vecFromAngle(float p_angle);
		static float angleFromVec(const b2Vec2& p_vector);
		static float angleFromVecs(const b2Vec2& p_vec1, const b2Vec2& p_vec2);
		
	};

#endif //_UTILS_H_