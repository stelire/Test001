/*
 * RDCPixel.cpp
 *
 *  Created on: 2018/08/28
 *      Author: stelire
 */

#include "RDCPixel.h"

RDCPixel::RDCPixel(void)
{
	m_nPosX = 0;
	m_nPosY = 0;
	m_tColor = {0, 0, 0};
}

RDCPixel::RDCPixel(UI_16 x, UI_16 y, RDT_COLOR color)
{
	m_nPosX = x;
	m_nPosY = y;
	m_tColor = color;
}

RDCPixel::~RDCPixel(void)
{
}

bool RDCPixel::setPos(UI_16 x, UI_16 y)
{
	bool bRslt = true;

	if(1){
		m_nPosX = x;
	} else {
		bRslt = false;
	}
	if(1){
		m_nPosY = y;
	} else {
		bRslt = false;
	}
	return bRslt;
}

bool RDCPixel::setColor(RDT_COLOR color)
{
	bool bRslt = true;

	if(1){
		m_tColor = color;
	} else {
		bRslt = false;
	}
	return bRslt;
}

void RDCPixel::getPos(UI_16 *px, UI_16 *py)
{
	*px = m_nPosX;
	*py = m_nPosY;
}

void RDCPixel::getColor(RDT_COLOR *pcolor)
{
	*pcolor = m_tColor;
}
