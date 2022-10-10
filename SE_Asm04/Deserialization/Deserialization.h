#pragma once
#include "stdafx.h"

class Deserialization
{
protected:
	std::ifstream file;
	std::ofstream fileAsm;
	unsigned char shortMarker = 0x01;
	unsigned char ushortMarker = 0x02;

	short s;
	unsigned short us;

public:
	Deserialization()
	{
		this->s = NULL;
		this->us = NULL;
	}
	void DeserializationData();
	void ConvertToAsm();
};