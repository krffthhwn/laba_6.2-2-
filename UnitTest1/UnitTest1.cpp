#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.2(2)/laba 6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB62rec
{
	TEST_CLASS(UnitTest1LAB62rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int f[] = { 1, 2, 3, 4, 5 };
			int result = Sum(f, 5, 0, 0);
			Assert::AreEqual(6, result);
		}
	};
}

