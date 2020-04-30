#include "solver.hpp"
#include <exception>
#include <cmath>
using namespace solver;

RealVariable solver::operator-(double e, const RealVariable& x ){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator-(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator==(const RealVariable& x, double e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator*(double a, const RealVariable& e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator*(const RealVariable& x, RealVariable e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator* (const RealVariable& x, double e){
    RealVariable x0;
    return x0;
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
RealVariable solver::operator/(const RealVariable& x, const RealVariable& e){
    RealVariable x0;
    return x0;
}
RealVariable solver::operator^(const RealVariable& x, double e){
    if(e>2) throw runtime_error("error");
    RealVariable x0;
    return x0;
}
RealVariable solver::operator==(const RealVariable& x, const RealVariable& e){
    RealVariable x0;
    return x0;
}
RealVariable operator==(double a, RealVariable e){
    RealVariable x0;
    return x0;
}

ComplexVariable solver::operator+(const ComplexVariable& x, ComplexVariable e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator+(const ComplexVariable& x, std::complex<double> e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator+(std::complex<double> x, const ComplexVariable& e){
    ComplexVariable x0;
    return x0;
} 
ComplexVariable solver::operator-(const ComplexVariable& x, ComplexVariable e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator-(const ComplexVariable& x, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator*(const ComplexVariable& x, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator-(std::complex<double> a, const ComplexVariable& x ){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator*(std::complex<double> a, const  ComplexVariable& e1){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator/(const ComplexVariable& x, double e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator^(const ComplexVariable& x, double e){
    if(e>2) throw runtime_error("error");
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator==(const ComplexVariable& x, const ComplexVariable e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator==(const ComplexVariable& x, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator/(const ComplexVariable& x, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator==(std::complex<double> a, const  ComplexVariable& e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator/(std::complex<double> a, const  ComplexVariable& e){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator+ (double e, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator- (double e, std::complex<double> a){
    ComplexVariable x0;
    return x0;
}
ComplexVariable solver::operator+ (std::complex<double> a, double e){
    ComplexVariable x0;
    return x0;
}
std::complex<double> operator^ (std::complex<double> a, double e){

    return 0i;
}
ComplexVariable solver::operator- (std::complex<double> a, double e){
    ComplexVariable x0;
    return x0;
}

//ComplexVariable operator/ (double e , std::complex<double> x, const  ComplexVariable& e1){
//    ComplexVariable x0;
//    return x0;
//}
double solver::solve(const RealVariable& Real){
    return 0;
}
std::complex<double> solver::solve(const ComplexVariable& complex){
    return 0;
}
