#pragma once
class Temperature
{
public:
	Temperature();
	~Temperature();
	double getKel();
	double getCel();
	double getFah();
	void setKel(double temp);
	void setCel(double temp);
private:
	double kelvin = 273.15;
};

