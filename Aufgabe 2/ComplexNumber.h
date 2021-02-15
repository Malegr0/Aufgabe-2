#pragma once

class ComplexNumber {
private:
	char initialInputType;	//has to be 'c' or 'p' for coord or polar
	float valueA;	//if type is coord then this value stands for real, if type is polar then this value stands for absoluteValue
	float valueB;	//if type is coord then this value stands for imag, if type is polar then this value stands for angle

public:
	ComplexNumber(char inputType, float valueA, float valueB);

	float calculateAbsoluteAmountWithCoord(float valueA, float imag);

	float calculateAngleWithCoord(float real, float imag, float absoluteAmount);

	float calculateImagWithPolar(float absoluteAmount, float angle);

	float calculateRealWithPolar(float absoluteAmount, float angle);

	std::string toCartesianString();

	std::string toPolarString();
};