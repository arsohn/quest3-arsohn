#pragma once
#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <string>
#include <fstream>
#include "RationalFraction.h"

using namespace std;

class CSVReader {
public:
	CSVReader(string n);
	void computer();
	~CSVReader();
private:
	fstream ifs;
};

#endif