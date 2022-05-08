#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm> //sort
#include <random>
#include <chrono>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <deque>
#include <limits.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::list;
using std::deque;

class Studentas
{
private:
	string vardas;
	string pavarde;
	vector<int> paz;
	int egz;
	double result = 0.0;

public:
	Studentas(); //konstruktorius
	Studentas(const Studentas& x); //copy constructor
	Studentas& operator = (const Studentas& x); //copy assignement operator
	~Studentas(); //destruktorius

	void setName(string x);
	void setName(std::istream& name);
	void setSurname(string x);
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
};
bool pagal_varda(Studentas& a, Studentas& b);
bool pagal_pavarde(Studentas& a, Studentas& b);
bool pagal_pazymi(Studentas& a, Studentas& b);
bool pagal_pazymi_2(Studentas& a, Studentas& b);
