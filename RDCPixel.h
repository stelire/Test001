/*
 * RDCPixel.h
 *
 *  Created on: 2018/08/28
 *      Author: stelire
 */

#ifndef RDCPIXEL_H_
#define RDCPIXEL_H_

#include "RDGraphics.h"

class RDCPixel
{
public:
	RDCPixel(void);
	RDCPixel(UI_16 x, UI_16 y, RDT_COLOR color);
	~RDCPixel(void);

private:
	UI_16 m_nPosX;
	UI_16 m_nPosY;
	RDT_COLOR m_tColor;

public:
	bool setPos(UI_16 x, UI_16 y);
	bool setColor(RDT_COLOR color);
	void getPos(UI_16 *px, UI_16 *py);
	void getColor(RDT_COLOR *pcolor);
};




#endif /* RDCPIXEL_H_ */
