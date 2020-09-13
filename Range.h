#ifndef RANGE_H
#define RANGE_H

class Range
{
	public:
		Range(double (*)(double), double, double, double, int);
		~Range();
		int iteration();
		double (*m_callback)(double x);
		double m_a;
		double m_b;
		double m_eps;
		double m_dec;
		int m_iteration;
	protected:
};

#endif
