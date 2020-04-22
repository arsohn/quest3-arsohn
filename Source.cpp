#include <iostream>
#include "CSVReader.h"

using namespace std;

int main() {
	CSVReader csv("example.csv");
	csv.compute();
	return 0;
}