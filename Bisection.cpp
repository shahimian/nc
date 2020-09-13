#include "Bisection.h"

Bisection::Bisection(double (*pf)(double x), double a, double b, double eps, int dec){
	Range(pf, a, b, eps, dec);
}

double Bisection::eval(){
	double x = (m_a + m_b) / 2;
	m_iteration = 1;
	while(abs(m_callback(x)) >= m_eps){
		if(m_callback(x) * m_callback(m_a) > 0)
			m_a = x;
		else
			m_b = x;
		x = (m_a + m_b) / 2;
		m_iteration += 1;
	}
	return x;
}

Bisection::~Bisection(){
}

