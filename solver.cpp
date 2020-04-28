#include "solver.hpp"
#include <exception>
#include <cmath>
using namespace solver;

RealVariable solver::operator-(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator==(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator*(double a, const RealVariable& e){
    RealVariable x;
    return x;
}

RealVariable solver::operator+(const RealVariable& x, RealVariable e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator+(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator+(double x, const RealVariable& e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator-(const RealVariable& x, RealVariable e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator/(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator^(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator==(const RealVariable& x, RealVariable e){
    RealVariable x0;
    return x0;
}
RealVariable operator==(double a, RealVariable e){
    RealVariable x0;
    return x0;
}

ComplexVariable& solver::operator+(const ComplexVariable& x, ComplexVariable e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator+(const ComplexVariable& x, std::complex<double> e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator+(std::complex<double> x, ComplexVariable& e){
    ComplexVariable x0;
    return x0;
} 
ComplexVariable& solver::operator-(const ComplexVariable& x, ComplexVariable e){
    ComplexVariable x0;
    return x0;
} 
ComplexVariable& solver::operator-(const ComplexVariable& x, std::complex<double> e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator*(std::complex<double> a, ComplexVariable& e1){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator/(const ComplexVariable& x, double e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator^(const ComplexVariable& x, double e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator==(const ComplexVariable& x, solver::ComplexVariable e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator==(const ComplexVariable& x, std::complex<double>){
    ComplexVariable x0;
    return x0;
}
ComplexVariable& solver::operator==(std::complex<double> a, ComplexVariable e){
    ComplexVariable x0;
    return x0;
}

double solver::solve(const RealVariable& Real){
    return 0;
}
std::complex<double> solver::solve(const ComplexVariable& Real){
    return 0;
}
