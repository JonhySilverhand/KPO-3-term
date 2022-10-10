#include "Serialization.h"

void Serialization::SerealizationData()
{
	file = ofstream("D:\\Лабораторные\\3_семестр\\КПО\\SE_Asm04\\SE_Asm04\\bin.bin");
	file.clear();

	file.write((char*)&shortMarker, 1);
	file.write((char*)&shortLenght, 1);
	file.write(reinterpret_cast<char*>(&s), shortLenght);

	file.write((char*)&ushortMarker, 1);
	file.write((char*)&ushortLength, 1);
	file.write(reinterpret_cast<char*>(&us), ushortLength);

	file.close();
}