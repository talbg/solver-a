#include "solver.hpp"
#include <exception>
#include <cmath>
using namespace solver;

RealVariable solver::operator-(const RealVariable& x,double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator==(const RealVariable& x,double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator*(double a, const RealVariable& e){
    RealVariable x;
    return x;
}

RealVariable operator+(solver::RealVariable x, solver::RealVariable e){
    return x;
}
RealVariable operator+(solver::RealVariable x, double e){
    return x;
}
RealVariable operator+(double x, solver::RealVariable e){
    return e;
}
RealVariable operator-(solver::RealVariable x, solver::RealVariable e){
    return x;
}
RealVariable operator/(solver::RealVariable x, double e){
    return x;
}
RealVariable operator^(solver::RealVariable x, double e){
    return x;
}
RealVariable operator==(solver::RealVariable x, solver::RealVariable e){
    return x;
}
RealVariable operator==(double a, solver::RealVariable e){
    return e;
}
ComplexVariable& operator+(solver::ComplexVariable& x, solver::ComplexVariable e){
    return x;
}
ComplexVariable& operator+(solver::ComplexVariable& x, std::complex<double> e){
    return x;
}
ComplexVariable& operator+(std::complex<double> x, ComplexVariable& e){
    return e;
} 
ComplexVariable& operator-(solver::ComplexVariable& x, solver::ComplexVariable e){
    return x;
} 
ComplexVariable& operator-(solver::ComplexVariable& x, std::complex<double> e){
    return x;
}
ComplexVariable& operator*(std::complex<double> a, solver::ComplexVariable& e1){
    return e1;
}
ComplexVariable& operator/(solver::ComplexVariable& x, double e){
    return x;
}
ComplexVariable& operator^(solver::ComplexVariable& x, double e){
    return x;
}
ComplexVariable& operator==(solver::ComplexVariable& x, solver::ComplexVariable e){
    return x;
}
ComplexVariable& operator==(solver::ComplexVariable& x , std::complex<double>){
    return x;
}
ComplexVariable& operator==(std::complex<double> a, solver::ComplexVariable& e){
    return e;
}

double solve(solver::RealVariable Real){
    return 0;
}
std::complex<double> solve(solver::ComplexVariable x){
    return 0;
}
