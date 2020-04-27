
#include "solver.hpp"
#include <exception>
#include<cmath>
using namespace solver;


solver::RealVariable& operator+(double e){
    return &this;
}
friend solver::RealVariable& operator+(RealVariable e){
    return &this;
}
solver::RealVariable& operator-(double e){
    return &this;
}
friend solver::RealVariable& operator-(RealVariable e){
    return &this;
}
solver::RealVariable& operator/(double e){
    return &this;
}
solver::RealVariable& operator^(double e){
    return &this;
}
solver::RealVariable& operator==(this, RealVariable e){
    return &this;
}
solver::ComplexVariable& operator+(std::complex<double> e){
    return &this;
}
friend solver:::ComplexVariable& operator+(ComplexVariable e){
    return &this;
};
solver::ComplexVariable& operator-(std::complex<double> e){
    return &this;
}
friend solver::ComplexVariable& operator-(ComplexVariable e){
    return &this;
}
solver::ComplexVariable& operator/(double e){
    return &this;
}
solver::ComplexVariable& operator^(double e){
    return &this;
}
solver::ComplexVariable& operator==(this, ComplexVariable e){
    return &this;
}
solver::ComplexVariable& operator==(this , std::complex<double>){
    retrun &this;
}
solver::RealVariable& operator()(RealVariable& e){
    return &e;
}
solver::RealVariable& operator*(double a, RealVariable& e){
    return &e;
}
solver::RealVariable& operator==(double a, RealVariable& e){
    return &e;
}
solver::ComplexVariable& operator()(ComplexVariable& e){
    return &e;
}
solver::ComplexVariable& operator*(double a, ComplexVariable& e1){
    return &e;
}
solver::ComplexVariable& operator==(double a, ComplexVariable& e){
    return &e;
}
double solve(RealVariable Real){
    return 0;
}
std::complex<double> solve(ComplexVariable x){
    return i;
}



//		friend RealVariable& operator==(double e);uble	solve(RealEquation Real){
//	if(Real.a != 0)
//		return (-Real.b+sqrt(Real.b-4*Real.a*Real.c))/4*Real.a;
//	else if (b != 0)
//		return (-Real.c)/Real.b;
//	else
//		throw runtime_error(" can't solve this equation ");
//}



















// class solver {
	// RealVariable x;
    // ComplexVariable y;
	
	// double solve(e){
		
	// }
	
// }

// class RealVariable {
	// private:
		// double a, b, c;
	// public:
		// RealVariable(): a(0), b(0), c(0){}
		// RealVariable(double x, double y, double z): a(x), b(y), c(z){}
		
		// double operator() (double x) { 
			// return _a*x*x + _b*x + _c; }

		// double operator()() { 
			// return 0; 
		// }

// };

// double	solve(RealVariable x);
// std::complex<double>	solve(RealVariable x);

// RealVariable operator+ (RealVariable x, double y) { 
	// return _a*x*x + _b*x + _c; 
// }
