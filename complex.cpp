#include "solver.hpp"
#include <complex>
using namespace solver;
//-------------------------------------
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++ COMPLEX NUMBERS +++++++++++++++++++++++++++++++++++++++++++++++

// Minus Operator
ComplexVariable& solver::operator-( ComplexVariable& x, double c){ //x-c
return x;
}
ComplexVariable& solver::operator-( ComplexVariable& x, ComplexVariable& c){ //x-x
return x;
}
ComplexVariable& solver::operator-(double c,  ComplexVariable& x ){ // c-x
return x;
}
ComplexVariable& solver::operator-( ComplexVariable& x, std::complex<double> i) { // x-i
    return x;
}
ComplexVariable& solver::operator-(std::complex<double> i,  ComplexVariable& x) { //i-x
    return x;
}
//-------------------------------------
// Equal Operator
ComplexVariable& solver::operator==( ComplexVariable& x, double c){ // x == c
return x;
}
ComplexVariable& solver::operator==( ComplexVariable& x, ComplexVariable& c){ // x == x
return x;
}
ComplexVariable& solver::operator==(double c, ComplexVariable& x){ // c == x
return x;
}
ComplexVariable& solver::operator==( ComplexVariable& x, std::complex<double> i) {  //  x==i
    return x;
}

//-------------------------------------
// Multiply Operator
ComplexVariable& solver::operator*(ComplexVariable& x, double c){ // x*c
return x;
}
ComplexVariable& solver::operator*(ComplexVariable& x, ComplexVariable& c){ // x*x
return x;
}
ComplexVariable& solver::operator*(double c,  ComplexVariable& x){ // c*x
return x;
}
ComplexVariable& solver::operator*( ComplexVariable& x, std::complex<double> i) { // x*i
    return x;
}
ComplexVariable& solver::operator*(std::complex<double> i,  ComplexVariable& x) { // i*x
    return x;
}

//-------------------------------------
// Exponent
ComplexVariable& solver::operator^(ComplexVariable& x, double c){ //x^c
    return x;
}
//-------------------------------------
// Addition
ComplexVariable& solver::operator+(ComplexVariable& x, double c){ //x+c
    return x;
}
ComplexVariable& solver::operator+(ComplexVariable& x,  ComplexVariable& c){ // x+x
    return x;
}
ComplexVariable& solver::operator+(double c,  ComplexVariable& x){ // c+x
    return x;
}
ComplexVariable& solver::operator+(ComplexVariable& x, std::complex<double> i) { // x+i
    return x;
}
ComplexVariable& solver::operator+(std::complex<double> i,  ComplexVariable& x) { // i+x
    return x;
}

//-------------------------------------
// Divide
ComplexVariable& solver::operator/( ComplexVariable& x, double c){ //x/c
    return x;
}
ComplexVariable& solver::operator/(ComplexVariable& x,  ComplexVariable& c){ // x/x
    return x;
}
ComplexVariable& solver::operator/(double c,  ComplexVariable& x){ // c/x
    return x;
}
ComplexVariable& solver::operator/(ComplexVariable& x, std::complex<double> i) { // x/i
    return x;
}
ComplexVariable& solver::operator/(std::complex<double> i,  ComplexVariable& x) { // i/x
    return x;
}

//-------------------------------------
// Solve Global Function
std::complex<double> solver::solve(ComplexVariable& x)
{
    return 5;
}
//-------------------------------------
