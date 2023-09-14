#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task6.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task6.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task5V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task5V4Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* date = new ISprint0Task6();
			int x = 1;
			int y = 1;
			c = date->Culc(x, y);
			Assert::AreEqual(0.625, c)
		}
	};
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task6V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task6V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
	};
}
