#pragma once

#include "Studentas.h"
#include "validacija.h"
#include "generavimas.h"
#include "skaic.h"

void ivestis(Studentas& temp);
string isvestis(Studentas& temp);
string antrasteVidurkis();
string antrasteMediana();

void i_ekrana(vector<Studentas> sarasas, int arVM);
void i_ekrana(list<Studentas> sarasas, int arVM);

void buffer_skaitymas(vector<Studentas>& sarasas, string failas);
void buffer_rasymas(vector<Studentas>& sarasas, string failas, int arVM);
//void string_spaudinimas(string failas, std::stringstream& tekstas, bool arVM);

void buffer_skaitymas(list<Studentas>& sarasas, string failas, bool arVM);
void buffer_rasymas(list<Studentas>& sarasas, string failas, int arVM);

void i_ekrana(deque<Studentas> sarasas, int arVM);

void buffer_skaitymas(deque<Studentas>& sarasas, string failas);
void buffer_rasymas(deque<Studentas>& sarasas, string failas, int arVM);
