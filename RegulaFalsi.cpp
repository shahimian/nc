#include "RegulaFalsi.h"

RegulaFalsi::RegulaFalsi(double (*pf)(double x), double a, double b, double eps, int dec){
	Range(pf, a, b, eps, dec);
}

double RegulaFalsi::eval(){
	double x;
	int m_iteration = 1;
	do {
		x = ( m_a * m_callback(m_b) - m_b * m_callback(m_a)) / (m_callback(m_b) - m_callback(m_a));
		if(m_callback(x) * m_callback(m_a) > 0)
			m_a = x;
		else
			m_b = x;
		m_iteration++;
	} while(abs(m_callback(x)) >= m_eps);
	return x;
}

RegulaFalsi::~RegulaFalsi()
{
}
