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
        explicit Zmogus() {
            vardas = "";
            pavarde = "";
        }
        explicit Zmogus(const string& v, const string& p) {
            vardas = v;
            pavarde = p;
        }
        virtual const string& getVardas() const = 0;
        virtual const string& getPavarde() const = 0;
};
