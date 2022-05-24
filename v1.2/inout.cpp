#include "inout.h"

void ivestis(Studentas& temp)
{
	bool pasirinkimas;
	int p;
	cout << "Iveskite studento varda: ";
	temp.setName(cin);
	cout << "Iveskite studento pavarde: ";
	temp.setSurname(cin);

	cout << "Jei norite namu darbu ivertinimus generuoti automatiskai spauskite 1, jei pazymius vesite ranka spauskite 0: " << endl;
	pasirinkimas = vienas_nulis();
	if (pasirinkimas)
	{
		cout << "Kiek ivertinimu norite sugeneruoti? " << endl;
		p = kintamojo_tipas();
		random_paz(p, temp);
	}
	else
	{
		cout << "Iveskite namu darbu ivertinimus (Ivedus visus duomenis spauskite 0): " << endl;

		while (true)
		{
			p = kintamojo_tipas();
			if (p == 0)
				break;
			else if (desimtbale(p))
			{
				temp.setMark(p);
			}
		}
	}

	cout << "Jei norite egzamino ivertinima generuoti automatiskai spauskite 1, jei pazymi vesite ranka spauskite 0: " << endl;
	pasirinkimas = vienas_nulis();
	if (pasirinkimas)
	{
		temp.setEgz(skaicius(1, 10));
	}
	else
	{
		cout << "Iveskite egzamino ivertinima: ";
		while (true)
		{
			p = kintamojo_tipas();
			if (desimtbale(p))
			{
				temp.setEgz(p);
				break;
			}
		}
	}

}
string isvestis(Studentas& temp)
{
	std::stringstream x;
	x << std::setiosflags(std::ios_base::left) << std::setw(20) << temp.getName() <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << temp.getSurname() <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << std::fixed << std::setprecision(2) << temp.getResult()*0.4+0.6*temp.getEgz() << endl;
	return x.str();
}
string antrasteVidurkis()
{
	std::stringstream temp;
	temp << std::setiosflags(std::ios_base::left) << std::setw(20) << "Vardas" <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << "Pavarde" <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << "Galutinis (Vid.)" <<
		std::endl << "----------------------------------------------------------" << endl;
	return temp.str();
}
string antrasteMediana()
{
	std::stringstream temp;
	temp << std::setiosflags(std::ios_base::left) << std::setw(20) << "Vardas" <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << "Pavarde" <<
		std::setiosflags(std::ios_base::left) << std::setw(20) << "Galutinis (Med.)" <<
		std::endl << "----------------------------------------------------------" << endl;
	return temp.str();
}
void i_ekrana(vector<Studentas> sarasas, int arVM)
{
	if (arVM == 1)
		cout << antrasteVidurkis();
	else
		cout << antrasteMediana();
	for (int i = 0; i < sarasas.size(); i++)
	{
		cout << isvestis(sarasas[i]);
	}
}
void buffer_skaitymas(vector<Studentas>& sarasas, string failas)
{
	try {
		std::stringstream buffer;
		std::ifstream in;
		in.open(failas);
		in.exceptions(std::ifstream::failbit | std::ifstream::badbit);

		string line;
		int p;

		auto x = std::chrono::high_resolution_clock::now();
		buffer << in.rdbuf();

		in.close();

		std::getline(buffer, line);
		while (buffer)
		{
			Studentas temp;
			std::getline(buffer, line);
			if (line.length() == 0)
				break;
			std::istringstream eil(line);
			//eil >> temp.getName() >> temp.getSurname();
			temp.setName(eil);
			temp.setSurname(eil);
			while (eil >> p)
			{
				temp.setMark(p);
			}
			temp.setEgz(temp.getMark());
			sarasas.push_back(temp);
		}
		std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
		cout << "Skaitymas is failo uztruko: " << std::setprecision(12) << diff.count() << " s" << endl;
	}
	catch (std::exception const& e) {
		cout << "Atidaryti failo nepavyko.\n";
	}

}
void buffer_rasymas(vector<Studentas>& sarasas, string failas, int arVM)
{
	std::stringstream rezultatas;
	if (arVM == 1)
		rezultatas << antrasteVidurkis();
	else
		rezultatas << antrasteMediana();
	for (auto& a : sarasas)
		rezultatas << a;
	sarasas.clear();
	sarasas.shrink_to_fit();

	std::ofstream out(failas);
	out << rezultatas.rdbuf();
	out.close();
}
void i_ekrana(list<Studentas> sarasas, int arVM)
{
	if (arVM == 1)
		cout << antrasteVidurkis();
	else
		cout << antrasteMediana();

	for (auto& a : sarasas)
		cout << isvestis(a);
}
void buffer_skaitymas(list<Studentas>& sarasas, string failas, bool arVM)
{
	try {
		std::stringstream buffer;
		std::ifstream in;
		in.open(failas);
		in.exceptions(std::ifstream::failbit | std::ifstream::badbit);

		string line;
		int p;

		auto x = std::chrono::high_resolution_clock::now();
		buffer << in.rdbuf();

		in.close();

		std::getline(buffer, line);
		//vector<int> paz;
		while (buffer)
		{
			Studentas temp;
			string name, last;
			std::getline(buffer, line);
			if (line.length() == 0)
				break;
			std::istringstream eil(line);
			eil >> name >> last;
			temp.setName(name);
			temp.setSurname(last);
			while (eil >> p)
			{
				temp.setMark(p);
			}
			temp.setEgz(temp.getMark());
			sarasas.push_back(temp);
		}
		std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
		cout << "Skaitymas is failo uztruko: " << std::setprecision(12) << diff.count() << " s" << endl;
	}
	catch (std::exception const& e) {
		cout << "Atidaryti failo nepavyko.\n";
	}

}
void buffer_rasymas(list<Studentas>& sarasas, string failas, int arVM)
{
	std::stringstream rezultatas;
	if (arVM == 1)
		rezultatas << antrasteVidurkis();
	else
		rezultatas << antrasteMediana();
	for (auto& a : sarasas)
		rezultatas << a;
	sarasas.clear();

	std::ofstream out(failas);
	out << rezultatas.rdbuf();
	out.close();
}
void i_ekrana(deque<Studentas> sarasas, int arVM)
{
	if (arVM == 1)
		cout << antrasteVidurkis();
	else
		cout << antrasteMediana();
	for (int i = 0; i < sarasas.size(); i++)
	{
		cout << isvestis(sarasas[i]);
	}
}
void buffer_skaitymas(deque<Studentas>& sarasas, string failas)
{
	try {
		std::stringstream buffer;
		std::ifstream in;
		in.open(failas);
		in.exceptions(std::ifstream::failbit | std::ifstream::badbit);

		string line;
		int p;

		auto x = std::chrono::high_resolution_clock::now();
		buffer << in.rdbuf();

		in.close();

		std::getline(buffer, line);
		while (buffer)
		{
			Studentas temp;
			std::getline(buffer, line);
			if (line.length() == 0)
				break;
			std::istringstream eil(line);
			temp.setName(eil);
			temp.setSurname(eil);
			while (eil >> p)
			{
				temp.setMark(p);
			}
			temp.setEgz(temp.getMark());
			sarasas.push_back(temp);
		}
		std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now() - x;
		cout << "Skaitymas is failo uztruko: " << std::setprecision(12) << diff.count() << " s" << endl;
	}
	catch (std::exception const& e) {
		cout << "Atidaryti failo nepavyko.\n";
	}

}
void buffer_rasymas(deque<Studentas>& sarasas, string failas, int arVM)
{
	std::stringstream rezultatas;
	if (arVM == 1)
		rezultatas << antrasteVidurkis();
	else
		rezultatas << antrasteMediana();
	for (auto& a : sarasas)
		rezultatas << a;
	sarasas.clear();
	sarasas.shrink_to_fit();

	std::ofstream out(failas);
	out << rezultatas.rdbuf();
	out.close();
}