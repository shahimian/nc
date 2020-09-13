#include "Range.h"

Range::Range(double (*callback)(double x), double a, double b, double eps, int dec)
{
	m_callback = pf;
	m_a = a;
	m_b = b;
	m_eps = eps;
	m_dec = dec;
}

int Range::iteration(){
	return m_iteration;
}

Range::~Range()
{
}
