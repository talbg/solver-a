#include <iostream>
#include <complex>
using namespace std;

namespace solver{
	class RealVariable {
	public:
		double a, b, c;
		RealVariable()
		: a(0), b(0), c(0){}
		 
		friend RealVariable operator-(const RealVariable& x, double e) ;
		friend RealVariable operator==(const RealVariable& x, double e);
		friend RealVariable operator+(const RealVariable& x, RealVariable e);
		friend RealVariable operator+(const RealVariable& x, double e);
		friend RealVariable operator-(const RealVariable& x, RealVariable e);
		friend RealVariable operator* (const RealVariable& x, double e);
		friend RealVariable operator*(const RealVariable& x, RealVariable e);
		friend RealVariable operator/(const RealVariable& x, double e);
		friend RealVariable operator/(const RealVariable& x, const RealVariable& e);
		friend RealVariable operator^(const RealVariable& x, double e);
		friend RealVariable operator==(const RealVariable& x, const RealVariable& e);
		
	};
	
	RealVariable operator+ (double x, const RealVariable& e);
	RealVariable operator- (double x, const RealVariable& e);
	RealVariable operator* (double a, const RealVariable& e);
	RealVariable operator==(double a, RealVariable e);
	
	double solve(const RealVariable& Real);
	
	class ComplexVariable {
	public:
        std::complex<double> a, b, c;
		
		ComplexVariable()
		: a(0), b(0), c(0){}
		friend ComplexVariable operator+ (const ComplexVariable& x, std::complex<double> e);
		friend ComplexVariable operator+ (const ComplexVariable& x, ComplexVariable e);
		friend ComplexVariable operator- (const ComplexVariable& x, ComplexVariable e);
		friend ComplexVariable operator- (const ComplexVariable& x, std::complex<double> e);
		friend ComplexVariable operator* (const ComplexVariable& e1, std::complex<double> a);
		friend ComplexVariable operator/ (const ComplexVariable& x, double e);
        friend ComplexVariable operator/ (const ComplexVariable& e1, std::complex<double> a);
		friend ComplexVariable operator^ (const ComplexVariable& x, double e);
//        friend ComplexVariable operator^ (const ComplexVariable& x, double e);
		friend ComplexVariable operator==(const ComplexVariable& x, ComplexVariable e);
		friend ComplexVariable operator==(const ComplexVariable& x, std::complex<double> a);
		friend ComplexVariable operator+ (double e , std::complex<double> x);
        friend ComplexVariable operator+ (std::complex<double> x, double e);

        friend ComplexVariable operator- (double e , std::complex<double> x);
        friend ComplexVariable operator- (std::complex<double> x, double e);
//        friend ComplexVariable operator- (double e , std::complex<double> x);

        friend std::complex<double> solve(const ComplexVariable& x);
	};
    ComplexVariable operator/ (std::complex<double> x, const  ComplexVariable& e);
	ComplexVariable operator+ (std::complex<double> x, const  ComplexVariable& e);
	ComplexVariable operator- (std::complex<double> x, const  ComplexVariable& e);
	ComplexVariable operator* (std::complex<double> a, const  ComplexVariable& e1);
	ComplexVariable operator==(std::complex<double> a, const  ComplexVariable& e);

};
std::complex<double> operator^ (std::complex<double> x, double e);

