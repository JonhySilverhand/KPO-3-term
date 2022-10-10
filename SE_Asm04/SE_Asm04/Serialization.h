#pragma once
#include "stdafx.h"

class Serialization
{
private:
	std::ofstream file;
	unsigned char shortMarker = 0x01;
	unsigned char ushortMarker = 0x02;
	unsigned char shortLenght = sizeof(short);
	unsigned char ushortLength = sizeof(unsigned short);
	short s;
	unsigned short us;
public:
	Serialization(short s, unsigned short us)
	{
		this->s = s;
		this->us = us;
	}
	void SerealizationData();
};