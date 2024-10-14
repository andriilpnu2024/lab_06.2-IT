#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-6.2 IT/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[2] = {1,2};
			Max(a, 2);
			Assert::AreEqual(Max(a,2),1);
		}
	};
}
