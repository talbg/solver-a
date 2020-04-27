
#include <iostream>
#include <complex>
using namespace std;

namespace solver{
	class RealVariable {
	public:
		double a, b, c;
		RealVariable()
		: a(0), b(0), c(0){}
	
		RealVariable& operator+(double e);
		
		RealVariable& operator-(double e);
		RealVariable& operator/(double e);
		RealVariable& operator^(double e);
		
		// friend RealVariable& operator/(RealVariable e);
		// friend RealVariable& operator*(RealVariable e1);
		// friend RealVariable& operator*(double a);
	};
	RealVariable& operator+(RealVariable& x, RealVariable e);
	RealVariable& operator+(double x, RealVariable e);
	RealVariable& operator-(RealVariable x, RealVariable e);
	RealVariable& operator==(RealVariable& x, double e);
	RealVariable& operator==(RealVariable& x, RealVariable e);
//	RealVariable& operator()(RealVariable& e);
	RealVariable& operator*(double a, RealVariable e);
	RealVariable& operator==(double a, RealVariable e);
	
	class ComplexVariable {
	public:
		double a, b, c;
		
		ComplexVariable()
		: a(0), b(0), c(0){}
		ComplexVariable& operator+(std::complex<double> e);
		ComplexVariable& operator-(std::complex<double> e);
		ComplexVariable& operator/(double e);
		ComplexVariable& operator^(double e);
		
	};
	ComplexVariable& operator+(ComplexVariable& x, ComplexVariable e);
	ComplexVariable& operator+(double x, ComplexVariable e);
	ComplexVariable& operator-(ComplexVariable& x, ComplexVariable e);
	ComplexVariable& operator==(ComplexVariable& x, ComplexVariable e);
	ComplexVariable& operator==(ComplexVariable& x, std::complex<double>);
	//ComplexVariable& operator()(ComplexVariable e);
	ComplexVariable& operator*(double a, ComplexVariable e1);
	ComplexVariable& operator==(double a, ComplexVariable e);

	double solve(RealVariable Real);
	std::complex<double> solve(ComplexVariable x);
};


