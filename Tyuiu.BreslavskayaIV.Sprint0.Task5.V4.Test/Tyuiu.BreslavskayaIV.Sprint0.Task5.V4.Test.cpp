#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task5V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task5V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new ISprint0Task5();
			int a = 67;
			float b = 8.5;
			float c = 6.5;
			int d;
			d = date->Culc(a, b, c);
			Assert::AreEqual(74.04, c);
		}
	};
}
