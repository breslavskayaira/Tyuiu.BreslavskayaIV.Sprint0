#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task4V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task4V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* date = new ISprint0Task4();
			int a = 2;
			int b = 3;
			int c = 4;
			int d = 7;
			int f;
			f = date-> Culc(a, b, c, d);
			Assert::AreEqual(34, f);
		}
	};
}
