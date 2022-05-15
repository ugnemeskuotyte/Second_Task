#include "Studentas.h"

void Studentas::setName(string& x)
{
	vardas = x;
}
void Studentas::setName(std::istream& name)
{
	name >> vardas;
}
void Studentas::setSurname(string& x)
{
	pavarde = x;
}
void Studentas::setSurname(std::istream& name)
{
	name >> pavarde;
}
void Studentas::setEgz(int x)
{
	egz = x;
}

double Studentas::getResult() { return result; }
double Studentas::getEgz() { return egz; }
string Studentas::getName() { return vardas; }
string Studentas::getSurname() { return pavarde; }
vector<int> Studentas::getMarks() { return paz; }
void Studentas::clearMarks() { paz.clear(); }
void Studentas::setResult(double x)
{
	result = x;
}

void Studentas::setMark(int x)
{
	paz.push_back(x);
}
int Studentas::getMark()
{
	int temp = paz.back();
	paz.pop_back();
	return temp;
}
bool pagal_varda(Studentas& a, Studentas& b)
{
	return a.getName() < b.getName();
}
bool pagal_pavarde(Studentas& a, Studentas& b)
{
	return a.getSurname() < b.getSurname();
}
bool pagal_pazymi(Studentas& a, Studentas& b)
{
	return a.getResult() > b.getResult();
}
bool pagal_pazymi_2(Studentas& a, Studentas& b)
{
	return a.getResult() < b.getResult();
}
Studentas::Studentas() { 
	egz = 0; 
	vardas = "";
	pavarde = "";
}
Studentas::Studentas(const Studentas& x)
{
	this->vardas = x.vardas;
	this->pavarde = x.pavarde;
	this->paz.reserve(x.paz.size());
	this->paz.resize(x.paz.size());
	for (int i = 0; i < x.paz.size(); i++)
	{
		paz[i] = x.paz[i];
	}
	this->egz = x.egz;
	this->result = x.result;
}
Studentas& Studentas::operator=(const Studentas& x)
{
	if (&x == this)
		return *this;
	vardas = x.vardas;
	pavarde = x.pavarde;
	this->paz.reserve(x.paz.size());
	this->paz.resize(x.paz.size());
	for (int i = 0; i < x.paz.size(); i++)
	{
		paz[i] = x.paz[i];
	}
	egz = x.egz;
	result = x.result;
	return *this;
}
Studentas::~Studentas()
{
	paz.clear();
}
