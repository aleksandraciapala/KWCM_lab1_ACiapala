#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

double degreemath::sin(double degree) {
	double rad = M_PI/180;
	return std::sin(rad*degree);
}

double degreemath::cos(double degree) {
	double rad = M_PI/180;
	return std::cos(rad*degree);
}

double degreemath::tg(double degree) {
	double rad = M_PI/180;
	return std::tan(rad*degree);
}

double degreemath::ctg(double degree) {
	double rad = M_PI/180;
	return 1/std::tan(rad*degree);
}