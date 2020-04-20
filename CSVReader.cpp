#include "CSVReader.h"

CSVReader::CSVReader(string n) {
	ifs.open(n);
}

void CSVReader::compute() {

}

CSVReader::~CSVReader() {
	ifs.close();
}