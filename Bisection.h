#ifndef BISECTION_H
#define BISECTION_H
#include <cmath>

class Bisection: public Range
{
	public:
		Bisection(double (*)(double), double, double, double, int);
		~Bisection();
		double eval();
	protected:
};

#endif
