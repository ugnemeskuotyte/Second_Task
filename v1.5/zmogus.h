#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
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

class Zmogus
{
    protected:
        string vardas;
        string pavarde;
    public:
        explicit Zmogus();
        ~Zmogus();
        explicit Zmogus(const Zmogus &x);
        void setName(string &x);
        void setName(std::istream& name);
        void setSurname(string &x);
	    void setSurname(std::istream& name);
        void setEgz(int x);
        void setResult(double x);

        string getVardas() const;
        string getPavarde() const;
};
