#ifndef REGULAFALSI_H
#define REGULAFALSI_H

#include "Range.h"

class RegulaFalsi: public Range
{
	public:
		RegulaFalsi(double (*)(double), double, double, double, int);
		double eval();
		~RegulaFalsi();
	protected:
};

#endif
