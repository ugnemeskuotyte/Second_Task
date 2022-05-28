#include "Studentas.h"

double Studentas::getResult() { return result; }
double Studentas::getEgz() { return egz; }
vector<int> Studentas::getMarks() { return paz; }
void Studentas::clearMarks() { paz.clear(); }
void Studentas::setEgz(int x)
{
	egz = x;
}
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
	return a.getVardas() < b.getVardas();
}
bool pagal_pavarde(Studentas& a, Studentas& b)
{
	return a.getPavarde() < b.getPavarde();
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
const string& Studentas::getVardas() const { return vardas; }
const string& Studentas::getPavarde() const { return pavarde; }
bool isVargsas(Studentas& a)
{
	if (a.getResult() < 5)
		return true;
	return false;
}