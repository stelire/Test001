//============================================================================
// Name        : Test001.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "!!!Second Message!!!" << endl;
	for(int i=0; i<argc; i++){
		cout << argv[i] << endl;
	}
	return 0;
}
