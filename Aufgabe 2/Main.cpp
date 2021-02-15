#include <iostream>
#include "ComplexNumber.h"

int main() {
	//output of toString methods, copy-constructor and destructor
	std::cout << "Output of toString methods, copy-constructor and destructor" << std::endl;
	{
		std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;
		ComplexNumber a = ComplexNumber('c', 1.0f, -2.0f);
		std::cout << "Construct of object a" << std::endl;
		std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;
		ComplexNumber b(a);
		std::cout << "Construct of object b" << std::endl;
		std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;

		std::cout << "Cartesian Form of a: " + a.toCartesianString() << std::endl;
		std::cout << "Polar Form of a: " + a.toPolarString() << "\n" << std::endl;

		std::cout << "Cartesian Form of b: " + b.toCartesianString() << std::endl;
		std::cout << "Polar Form of b: " + b.toPolarString() << "\n" << std::endl;

		std::cout << "Deconstruct of object a and b" << std::endl;
	}
	std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;

	ComplexNumber c = ComplexNumber('p', 1.0f, -2.0f);
	std::cout << "Construct of object c" << std::endl;
	std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;
	ComplexNumber d(c);
	std::cout << "Construct of object d" << std::endl;
	std::cout << "NumberOfInstances: " << ComplexNumber::getNumbersOfInstances() << "\n" << std::endl;

	std::cout << "Cartesian Form of c: " + c.toCartesianString() << std::endl;
	std::cout << "Polar Form of c: " + c.toPolarString() << "\n" << std::endl;

	std::cout << "Cartesian Form of d: " + d.toCartesianString() << std::endl;
	std::cout << "Polar Form of d: " + d.toPolarString() << "\n" << std::endl;

	//output of each setter-method

	std::cout << "\n----------\n" << std::endl;
	std::cout << "Output of each setter-method\n" << "Construct of object e\n" << std::endl;
	ComplexNumber e = ComplexNumber('c', 1.0f, -2.0f);

	std::cout << "Set new values for cartesian form (3.0f, 5.0f)" << std::endl;
	e.setCartesianValues(3.0f, 5.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Change real of cartesian form to 1.0f" << std::endl;
	e.setValueA(1.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Change imag of cartesian form to -2.0f" << std::endl;
	e.setValueB(-2.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Set new values for polar form (3.0f, 5.0f)" << std::endl;
	e.setPolarValues(3.0f, 5.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Change absolute value of polar form to 1.0f" << std::endl;
	e.setValueA(1.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Change angle of polar form to -2.0f" << std::endl;
	e.setValueB(-2.0f);
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	std::cout << "Change form from polar to cartesian" << std::endl;
	e.setInitialInputType('c');
	std::cout << "Cartesian Form of e: " + e.toCartesianString() << std::endl;
	std::cout << "Polar Form of e: " + e.toPolarString() << "\n" << std::endl;

	return 0;
}