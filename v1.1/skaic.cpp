#include "skaic.h"

double Vidurkis(vector<int> paz)
{
	double suma = 0;
	if (paz.size() == 0)
		return 0;
	for (int i = 0; i < paz.size(); i++)
	{
		suma += paz[i];
	}
	suma /= paz.size() * 1.0;
	return suma;
}
double Mediana(vector<int> paz)
{
	if (paz.size() == 0)
	{
		return 0;
	}
	sort(paz.begin(), paz.end());
	if (paz.size() % 2 != 0)
	{
		return paz[paz.size() / 2];
	}
	else
	{
		double ats = paz[paz.size() / 2] + paz[paz.size() / 2 - 1];
		return ats / 2.0;
	}
}

void skaiciavimas(vector<Studentas>& sarasas, int arVM)
{
	for (auto& el : sarasas) //is skaidriu
	{
		if (arVM == 1)
		{
			el.setResult(Vidurkis(el.getMarks()));
			el.clearMarks();
		}
		else
		{
			el.setResult(Mediana(el.getMarks()));
			el.clearMarks();
		}
	}
}
void skaiciavimas(list<Studentas>& sarasas, int arVM)
{
	for (auto& el : sarasas) //is skaidriu
	{
		if (arVM == 1)
		{
			el.setResult(Vidurkis(el.getMarks()));
			el.clearMarks();
		}
		else
		{
			el.setResult(Mediana(el.getMarks()));
			el.clearMarks();
		}
	}
}
void skaiciavimas(deque<Studentas>& sarasas, int arVM)
{
	for (auto& el : sarasas) //is skaidriu
	{
		if (arVM == 1)
		{
			el.setResult(Vidurkis(el.getMarks()));
			el.clearMarks();
		}
		else
		{
			el.setResult(Mediana(el.getMarks()));
			el.clearMarks();
		}
	}
}