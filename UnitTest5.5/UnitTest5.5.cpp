#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab5.5/ChyrunSofialab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		    int t;
			t = f(1, 1, 1, 1);
			Assert::AreEqual(t, 2);
		}
	};
}
