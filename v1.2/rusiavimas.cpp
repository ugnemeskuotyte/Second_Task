#include "rusiavimas.h"

void studentu_skirtymas(vector<Studentas>& sarasas, vector<Studentas>& pirmunai, vector<Studentas>& nuskriaustieji)
{
	sort(sarasas.begin(), sarasas.end(), pagal_pazymi);
	auto x = std::chrono::high_resolution_clock::now();
	vector<Studentas> ::iterator it = sarasas.end();
	it--;
	for (int i = sarasas.size() - 1; i > 0; i--)
	{
		if (it->getResult() < 5)
		{
			nuskriaustieji.push_back(*it);
			sarasas.resize(sarasas.size()-1);
		}
		it--;
	}	
	pirmunai = sarasas;	
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;

}
void studentu_skirtymas(list<Studentas>& sarasas, list<Studentas>& pirmunai, list<Studentas>& nuskriaustieji)
{
	sarasas.sort(pagal_pazymi_2);
	auto x = std::chrono::high_resolution_clock::now();

	list<Studentas> ::iterator it = sarasas.end();
	it--;

	for (auto i = sarasas.size() - 1; i > 0; i--)
	{
		//advance(it, i);
		if (it->getResult() >= 5)
		{
			pirmunai.push_back(*it);
		}
		it--;
	}
	sarasas.resize(sarasas.size() - pirmunai.size());
	nuskriaustieji = sarasas;
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;
}
void studentu_skirtymas(deque<Studentas>& sarasas, deque<Studentas>& pirmunai, deque<Studentas>& nuskriaustieji)
{
	sort(sarasas.begin(), sarasas.end(), pagal_pazymi);
	auto x = std::chrono::high_resolution_clock::now();
	deque<Studentas> ::iterator it = sarasas.end();
	it--;
	for (auto i = sarasas.size() - 1; i > 0; i--)
	{
		if (it->getResult() < 5)
		{
			nuskriaustieji.push_back(*it);
			sarasas.resize(sarasas.size() - 1);
		}
		it--;
	}

	pirmunai = sarasas;
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;
}
void studentu_skirtymas_1(deque<Studentas>& sarasas, deque<Studentas>& pirmunai, deque<Studentas>& nuskriaustieji)
{
	sort(sarasas.begin(), sarasas.end(), pagal_pazymi);
	auto x = std::chrono::high_resolution_clock::now();
	for (auto& s : sarasas)
	{
		if (s.getResult() < 5)
		{
			nuskriaustieji.push_back(s);
		}
		else
		{
			pirmunai.push_back(s);
		}
	}
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;
}
void studentu_skirtymas_1(list<Studentas>& sarasas, list<Studentas>& pirmunai, list<Studentas>& nuskriaustieji)
{
	sarasas.sort(pagal_pazymi);
	auto x = std::chrono::high_resolution_clock::now();
	for (auto& s : sarasas)
	{
		if (s.getResult() < 5)
		{
			nuskriaustieji.push_back(s);
		}
		else
		{
			pirmunai.push_back(s);
		}
	}
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;
}
void studentu_skirtymas_1(vector<Studentas>& sarasas, vector<Studentas>& pirmunai, vector<Studentas>& nuskriaustieji)
{
	sort(sarasas.begin(), sarasas.end(), pagal_pazymi);
	auto x = std::chrono::high_resolution_clock::now();
	for (auto& s : sarasas)
	{
		if (s.getResult() < 5)
		{
			nuskriaustieji.push_back(s);
		}
		else
		{
			pirmunai.push_back(s);
		}
	}
	sarasas.clear();
	std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
	cout << "Studentu dalinimas uztruko: " << std::setprecision(15) << diff.count() << " s" << endl;
}