#pragma once

#include "zmogus.h"

class Studentas:public Zmogus
{
private:
	vector<int> paz;
	int egz;
	double result = 0.0;

public:
	Studentas(); //konstruktorius
	Studentas(const Studentas& x); //copy constructor
	Studentas& operator = (const Studentas& x); //copy assignement operator
	~Studentas(); //destruktorius
	explicit Studentas(const string& vardas, const string& pavarde) :Zmogus(vardas, pavarde) {};

	void setEgz(int x);
	void setResult(double x);
	
	const string& getVardas() const override;
	const string& getPavarde() const override;
	double getResult();
	double getEgz();

	void setMark(int x);
	int getMark();
	vector<int> getMarks();
	void clearMarks();

	friend std::ostream &operator<<(std::ostream & output, const Studentas &s)
	{
		output<< std::setiosflags(std::ios_base::left) << std::setw(20) << s.vardas <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << s.pavarde <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << std::fixed << std::setprecision(2) << s.result << endl;
		return output;
	};
	
};
bool pagal_varda(Studentas& a, Studentas& b);
bool pagal_pavarde(Studentas& a, Studentas& b);
bool pagal_pazymi(Studentas& a, Studentas& b);
bool pagal_pazymi_2(Studentas& a, Studentas& b);
bool isVargsas(Studentas& a);
