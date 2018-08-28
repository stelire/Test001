/*
 * Test001.cpp
 *
 *  Created on: 2018/08/28
 *      Author: stelire
 */

#include <iostream>
#include "RDCPixel.h"
using namespace std;

int main(int argc, char **argv)
{
	RDCPixel *pPx;
	RDT_COLOR color = {0, 0, 0};

	for(int i=0; i<argc; i++){
		cout << argv[i] << endl;
	}

	pPx = new RDCPixel[20];

	for(int i=0; i<20; i++){
		pPx[i].setPos(0, 0);
		pPx[i].setColor(color);
	}

	delete [] pPx;

	return 0;
}


