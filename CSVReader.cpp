#include "CSVReader.h"

CSVReader::CSVReader(string n) {
	ifs.open(n);
}

void CSVReader::compute() {
	RationalFraction r1;
	RationalFraction r2;
	string line;
	while (getline(ifs, line)) { // getline gets line from input file, then stores in string variable
		char* str = (char*)line.c_str();  // converts string to char*
		char* nextstr;

		// will include conversions
		// get num and den of r1 and r2 as well as operation
		// operation string will  = an operation
		// result = result from operator overload

		if (operation == "+") {
			RationalFraction(r1 + r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}
		else if (operation == "-") {
			RationalFraction(r1 - r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}
		else if (operation == "*") {
			RationalFraction(r1 * r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}
		else if (operation == "/") {
			RationalFraction(r1 / r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}
		else if (operation == "==") {
			cout << (r1 == r2) << endl;
		}
		else if (operation == "!=") {
			cout << (r1 != r2) << endl;
		}
		else if (operation == ">") {
			cout << (r1 > r2) << endl;
		}
		else if (operation == "<") {
			cout << (r1 < r2) << endl;
		}
		else if (operation == ">=") {
			cout << (r1 >= r2) << endl;
		}
		else if (operation == "<=") {
			cout << (r1 <= r2) << endl;
		}
	}
}

CSVReader::~CSVReader() {
	ifs.close();
}