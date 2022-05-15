#include "zmogus.h"

void Zmogus::setName(string &x)
{
    this->vardas = x;
}
void Zmogus::setName(std::istream& name)
{
    name>>this->vardas;
}
void Zmogus::setSurname(string &x)
{
    this->pavarde=x;
}
void Zmogus::setSurname(std::istream& name)
{
    name>>this->pavarde;
}
string Zmogus::getVardas() const{return vardas; }
string Zmogus::getPavarde() const{return pavarde;}
Zmogus::Zmogus (){
    vardas="";
    pavarde="";
}
Zmogus::~Zmogus(){}