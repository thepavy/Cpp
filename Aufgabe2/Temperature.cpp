#include "stdafx.h"
#include "Temperature.h"


Temperature::Temperature()
{
}

Temperature::~Temperature()
{
}

double Temperature::getKel()
{
	return kelvin;
}

double Temperature::getCel()
{
	return kelvin - 273.15;
}

double Temperature::getFah()
{
	return (kelvin - 273.15)*(5.0 / 9.0) + 32;
}

void Temperature::setCel(double temp)
{
	kelvin = 273.15 + temp;
}

void Temperature::setKel(double temp)
{
	kelvin = temp;
}