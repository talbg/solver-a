
#include <iostream>
#include <complex>
using namespace std;

namespace solver{
	
	double	solve(RealEquation Real);
	std::complex<double>	solve(ComplexVariable x);
	
	class RealVariable {
	public:
		RealEquation operator+(double e);
		RealEquation operator-(double e);
		RealEquation operator/(double e);
		RealEquation operator^(double e);
		RealEquation operator==(RealEquation e);
	};
	RealEquation operator*(double a, RealVariable e1);
	
	
	class RealEquation {
	public:
		double a, b, c;
		
		RealEquation operator==(RealEquation e);
		RealEquation operator==(double x);
		RealEquation operator+(RealEquation e);
		RealEquation operator+(double x);
		RealEquation operator/(double x);
	}
	RealEquation operator()(RealEquation e);
	RealEquation operator==(double a, RealEquation e1);
	
	class ComplexVariable {
	public:
		ComplexVariable operator+(double e);
		ComplexVariable operator-(double e);
		ComplexVariable operator/(double e);
		ComplexVariable operator^(double e);
		ComplexVariable operator==(complexEquation e);
	};
	RealEquation operator*(double a, RealVariable e1);
	
	class complexEquation {
	public:
		std::complex<double> a, b, c;
		
		complexEquation operator==(complexEquation e);
		complexEquation operator==(double x);
		complexEquation operator+(complexEquation e);
		complexEquation operator+(double x);
		complexEquation operator/(double x);
	}
	complexEquation operator()(complexEquation e);
	complexEquation operator==(std::complex<double> a, complexEquation e1);

}


