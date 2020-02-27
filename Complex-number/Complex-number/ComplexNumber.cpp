#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() : _real(), _imag() { }
ComplexNumber::ComplexNumber(double real) : _real(real), _imag() { }
ComplexNumber::ComplexNumber(double real, double imag) : _real(real), _imag(imag) { }
ComplexNumber::ComplexNumber(ComplexNumber& c) : _real(c.getReal()), _imag(c.getImag) { }


