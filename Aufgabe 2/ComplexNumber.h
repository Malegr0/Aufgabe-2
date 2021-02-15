#pragma once

class ComplexNumber {
private:
	char m_initialInputType;	//has to be 'c' or 'p' for coord/cartesian or polar
	float m_valueA;	//if type is cartesian then this value stands for real, if type is polar then this value stands for absoluteValue
	float m_valueB;	//if type is cartesian then this value stands for imag, if type is polar then this value stands for angle

public:
	ComplexNumber(char inputType, float valueA, float valueB) : m_initialInputType(inputType), m_valueA(valueA), m_valueB(valueB) {}

	float calculateAbsoluteAmountWithCart(float real, float imag) const;

	float calculateAngleWithCart(float real, float imag, float absoluteAmount) const;

	float calculateImagWithPolar(float absoluteAmount, float angle) const;

	float calculateRealWithPolar(float absoluteAmount, float angle) const;

	std::string toCartesianString() const;

	std::string toPolarString() const;

	void setValueA(float valueA) {
		this->m_valueA = valueA;
	}

	void setValueB(float valueB) {
		this->m_valueB = valueB;
	}
	
	void setInitialInputType(char inputType) {
		this->m_initialInputType = inputType;
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