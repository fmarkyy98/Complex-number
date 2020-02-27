#pragma once

#include <iostream>

class ComplexNumber
{
private:
	double _real;
	double _imag;

public:
	ComplexNumber();
	ComplexNumber(double real);
	ComplexNumber(double real, double imag);
	ComplexNumber(ComplexNumber& c);

	double getReal() const;
	double getImag() const;
	void setReal(double real);
	void setImag(double imag);

	ComplexNumber& add(ComplexNumber& c);
	ComplexNumber& mul(ComplexNumber& c);

	ComplexNumber& operator + (ComplexNumber& c);
	ComplexNumber& operator * (ComplexNumber& c);
	ComplexNumber& operator = (ComplexNumber& c);

	friend std::ostream& operator << (std::ostream& os, const ComplexNumber& c);
};

