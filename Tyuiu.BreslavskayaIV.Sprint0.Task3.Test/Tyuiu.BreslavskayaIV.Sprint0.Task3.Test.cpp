﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task3.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;

			d = date->Add(a, b, c);

			Assert::AreEqual(12, d);
		}
	};
}
