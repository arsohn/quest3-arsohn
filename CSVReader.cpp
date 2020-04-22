#include "CSVReader.h"

CSVReader::CSVReader(string n)
{
	ifs.open(n);
}
void CSVReader::compute()
{
	RationalFraction r1;
	RationalFraction r2;
	string line;
	while (getline(ifs, line)) {	// getline gets line from input file, then stores in string variable
		char* str = (char*)line.c_str();	//converts string to char*
		char* nextstr;
		
		// get num and den of r1 and r2 as well as operation
		// operation string will  = an operation
		// result = result from operator overload
		// HAVE TO RESEARCH HOW TO TURN CHAR TO INT, 
		// atoi, strtok, strtok_s? need to do more research, check forums
		r1.setNum(atoi(strtok_s(str, ",", &nextstr)));	//get num of r1
		r1.setDen(atoi(strtok_s(NULL, ",", &nextstr)));	//get den of r1

		string operation = strtok_s(NULL, ",", &nextstr);	//get operation

		r2.setNum(atoi(strtok_s(NULL, ",", &nextstr)));	//get num of r2
		r2.setDen(atoi(strtok_s(NULL, ",", &nextstr)));	//get den of r2

		if (operation == "+") {
			RationalFraction result(r1 + r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}

		else if (operation == "-") {
			RationalFraction result(r1 - r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}

		else if (operation == "*") {
			RationalFraction result(r1 * r2);
			cout << result.getNum() << "/" << result.getDen() << endl;
		}

		else if (operation == "/") {
			RationalFraction result(r1 / r2);
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
		else if (operation == "<=") {
			cout << (r1 <= r2) << endl;
		}
		else if (operation == ">=") {
			cout << (r1 >= r2) << endl;
		}	
	}
}
CSVReader::~CSVReader() {
	ifs.close();
}