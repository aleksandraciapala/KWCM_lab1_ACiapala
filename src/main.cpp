#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#endif
#include <iostream>


int main()
{
	double degree  = 30.0;
	#ifdef USE_TRIGONOMETRY_DEGREE
		double sin = degreemath::sin(degree);
		double cos = degreemath::cos(degree);
		double tan = degreemath::tg(degree);
		double cotan = degreemath::ctg(degree);
	#else
		double sin = std::sin(degree);
		double cos = std::cos(degree);
		double tan = std::tan(degree);
		double cotan = 1/std::tan(degree);
	#endif 

	//sprawdzenie
	std::cout << sin << std::endl;
	std::cout << cos << std::endl;
	std::cout << tan << std::endl;
	std::cout << cotan << std::endl;
}