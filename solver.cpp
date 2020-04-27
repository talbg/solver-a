
#include "solver.hpp"
#include <exception>
#include<cmath>
using namespace solver;


solver::RealVariable& operator+(RealVariable& x, double e){
    return x;
}
solver::RealVariable& operator+(RealVariable& x, RealVariable e){
    return x;
}
solver::RealVariable& operator-(RealVariable& x, double e){
    return x;
}
solver::RealVariable& operator-(RealVariable& x, RealVariable e){
    return x;
}
solver::RealVariable& operator/(RealVariable& x, double e){
    return x;
}
solver::RealVariable& operator^(RealVariable& x, double e){
    return x;
}
solver::RealVariable& operator==(RealVariable& x, RealVariable e){
    return x;
}

solver::RealVariable& operator+(double x, RealVariable& e){
    return e;
}
solver::ComplexVariable& operator+(ComplexVariable& x, std::complex<double> e){
    return x;
}
solver::ComplexVariable& operator-(ComplexVariable& x, std::complex<double> e){
    return x;
}
solver::ComplexVariable& operator+(ComplexVariable& x, ComplexVariable e){
    return x;
}
solver::ComplexVariable& operator+(double x, ComplexVariable& e){
    return e;
}  
ComplexVariable& operator-(ComplexVariable& x, ComplexVariable e){
    return x;
}
solver::ComplexVariable& operator/(ComplexVariable& x, double e){
    return x;
}
solver::ComplexVariable& operator^(ComplexVariable& x, double e){
    return x;
}
solver::ComplexVariable& operator==(ComplexVariable& x, ComplexVariable e){
    return x;
}
solver::ComplexVariable& operator==(ComplexVariable& x , std::complex<double>){
    return x;
}
// solver::RealVariable& operator()(RealVariable& e){
//     return &e;
// }
solver::RealVariable& operator*(double a, RealVariable& e){
    return e;
}
solver::RealVariable& operator==(double a, RealVariable& e){
    return e;
}
// solver::ComplexVariable& operator()(ComplexVariable& e){
//     return &e;
// }
solver::ComplexVariable& operator*(double a, ComplexVariable& e1){
    return e1;
}
solver::ComplexVariable& operator==(double a, ComplexVariable& e){
    return e;
}
double solve(RealVariable Real){
    return 0;
}
std::complex<double> solve(ComplexVariable x){
    return 0
}
