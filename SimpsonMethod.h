#ifndef SIMPSONMETHOD_H
#define SIMPSONMETHOD_H
#include "Range.h"

class SimpsonMethod: public Range
{
	int m_n;
	
	public:
		SimpsonMethod(double (*)(double), double, double, int);
		double eval();
		~SimpsonMethod();
	protected:
};

#endif
