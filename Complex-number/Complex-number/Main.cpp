#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main()
{
	ComplexNumber c1(10, 20);
	ComplexNumber c2(1, 2);
	ComplexNumber c3(c1.add(c2));
	//ComplexNumber c4 = c1 * c2;
	cout << "c1: " << c1 << endl;
	cout << "c2: " << c2 << endl;
	cout << "c3: " << c3 << endl;
	//cout << "c4: " << c4 << endl;
	return 0;
}
