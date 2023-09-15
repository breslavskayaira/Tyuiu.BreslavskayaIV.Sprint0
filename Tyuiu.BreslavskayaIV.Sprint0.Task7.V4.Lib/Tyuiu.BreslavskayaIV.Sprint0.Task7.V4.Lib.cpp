// Tyuiu.BreslavskayaIV.Sprint0.Task7.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
class ISprint0Task7
{
public: 
	virtual float Rezalt(int k, int a)
{
	int n1 =  k / 1000000;
	int n2 = (k / 100000)%10;
	int n3 = (k / 10000) % 10;
	int n4 = (k / 1000) % 10;
	int n5 = (k / 100) % 10;
	int n6 = (k / 10) % 10;
	bool p = (n1 == a) || (n2 == a) || (n3 == a) || (n4 == a) || (n5 == a) || (n6 == a);
	return p;
}


};

