
#include "solver.hpp"
#include <exception>
#include<cmath>
using namespace solver;


solver::RealVariable& operator+(double e){
    return &this;
}
solver::RealVariable& operator+(RealVariable x, RealVariable e){
    return &x;
}
solver::RealVariable& operator-(double e){
    return &this;
}
solver::RealVariable& operator-(RealVariable x, RealVariable e){
    return &x;
}
solver::RealVariable& operator/(double e){
    return &this;
}
solver::RealVariable& operator^(double e){
    return &this;
}
solver::RealVariable& operator==(RealVariable x, RealVariable e){
    return &x;
}

solver::RealVariable& operator+(double x, RealVariable e){
    return &e;
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
ComplexVariable& operator+(ComplexVariable& x, ComplexVariable e){
    return &x;
}
ComplexVariable& operator-(ComplexVariable& x, ComplexVariable e){
    return &x;
}
solver::ComplexVariable& operator/(double e){
    return &this;
}
solver::ComplexVariable& operator^(double e){
    return &this;
}
solver::ComplexVariable& operator==(ComplexVariable x, ComplexVariable e){
    return &x;
}
solver::ComplexVariable& operator==(ComplexVariable x , std::complex<double>){
    retrun &x;
}
// solver::RealVariable& operator()(RealVariable& e){
//     return &e;
// }
solver::RealVariable& operator*(double a, RealVariable& e){
    return &e;
}
solver::RealVariable& operator==(double a, RealVariable& e){
    return &e;
}
// solver::ComplexVariable& operator()(ComplexVariable& e){
//     return &e;
// }
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
