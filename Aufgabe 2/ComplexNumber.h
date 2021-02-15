#pragma once

class ComplexNumber {
private:
	char initialInputType;	//has to be 'c' or 'p' for coord/cartesian or polar
	float valueA;	//if type is cartesian then this value stands for real, if type is polar then this value stands for absoluteValue
	float valueB;	//if type is cartesian then this value stands for imag, if type is polar then this value stands for angle

public:
	ComplexNumber(char inputType, float valueA, float valueB);

	float calculateAbsoluteAmountWithCart(float real, float imag);

	float calculateAngleWithCart(float real, float imag, float absoluteAmount);

	float calculateImagWithPolar(float absoluteAmount, float angle);

	float calculateRealWithPolar(float absoluteAmount, float angle);

	std::string toCartesianString();

	std::string toPolarString();

	void setValueA(float valueA) {
		this->valueA = valueA;
	}

	void setValueB(float valueB) {
		this->valueB = valueB;
	}
	
	void setInitialInputType(char inputType) {
		this->initialInputType = inputType;
	}

	void setCartesianValues(float valueA, float valueB) {
		setValueA(valueA);
		setValueB(valueB);
		setInitialInputType('c');
	}

	void setPolarValues(float valueA, float valueB) {
		setValueA(valueA);
		setValueB(valueB);
		setInitialInputType('c');
	}
};