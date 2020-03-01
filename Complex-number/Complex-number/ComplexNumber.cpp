#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() : _real(0), _imag(0) { }
ComplexNumber::ComplexNumber(double real) : _real(real), _imag() { }
ComplexNumber::ComplexNumber(double real, double imag) : _real(real), _imag(imag) { }
//ComplexNumber::ComplexNumber(ComplexNumber& c) : _real(c._real), _imag(c._imag) { }

double ComplexNumber::getReal() const
{
	return this->_real;
}
double ComplexNumber::getImag() const
{
	return this->_imag;
}
void ComplexNumber::setReal(double real)
{
	this->_real = real;
}
void ComplexNumber::setImag(double imag)
{
	this->_imag = imag;
}

ComplexNumber ComplexNumber::add(ComplexNumber& c)
{
	ComplexNumber result(this->_real + c._real, this->_imag + c._imag);
	return result;
}
ComplexNumber ComplexNumber::mul(ComplexNumber& c)
{
	ComplexNumber result(this->_real * c._real - this->_imag * c._imag, this->_real * c._imag + this->_imag * c._real);
	return result;
}

ComplexNumber ComplexNumber::operator + (ComplexNumber& c)
{
	ComplexNumber result(this->_real + c._real, this->_imag + c._imag);
	return result;
}
ComplexNumber ComplexNumber::operator * (ComplexNumber& c)
{
	ComplexNumber result(this->_real * c._real - this->_imag * c._imag, this->_real * c._imag + this->_imag * c._real);
	return result;
}
//ComplexNumber& ComplexNumber::operator = (ComplexNumber& c)
//{
//	ComplexNumber result(c);
//	return result;
//}

std::ostream& operator << (std::ostream& os, const ComplexNumber& c)
{
	os << c._real << " + " << c._imag << "i";
	return os;
}
