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

	void setName(string& x);
	void setName(std::istream& name);
	void setSurname(string& x);
	void setSurname(std::istream& name);
	void setEgz(int x);
	void setResult(double x);
	
	double getResult();
	double getEgz();
	string getName();
	string getSurname();

	void setMark(int x);
	int getMark();
	vector<int> getMarks();
	void clearMarks();

	friend std::ostream &operator<<(std::ostream & output, const Studentas &s)
	{
		output<< std::setiosflags(std::ios_base::left) << std::setw(20) << s.vardas <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << s.pavarde <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << std::fixed << std::setprecision(2) << s.result*0.4+0.6*s.egz << endl;
		return output;
	};
	
};
bool pagal_varda(Studentas& a, Studentas& b);
bool pagal_pavarde(Studentas& a, Studentas& b);
bool pagal_pazymi(Studentas& a, Studentas& b);
bool pagal_pazymi_2(Studentas& a, Studentas& b);
