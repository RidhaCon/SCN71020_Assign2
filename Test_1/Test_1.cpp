#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getIntInput(char message[]);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int* length;
extern "C" int* width;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{
	TEST_CLASS(Test1)
	{
	public:
		
		TEST_METHOD(TestLengthFN)
		{
			int length = 10;
			setLength(3, &length);

			Assert::AreEqual(3, length);
		}
		TEST_METHOD(TestLengthFN_Min)
		{
			int length = 10;
			setLength(0, &length);
			
			Assert::AreEqual(10, length);
		}
		TEST_METHOD(TestLengthFN_Max)
		{
			int length = 10;
			setLength(100, &length);

			Assert::AreEqual(10, length);
		}

		TEST_METHOD(TestWidthFN)
		{
			int width = 10;
			setWidth(3, &width);

			Assert::AreEqual(3, width);
		}
		TEST_METHOD(TestWidthFN_Min)
		{
			int width = 10;
			setWidth(0, &width);

			Assert::AreEqual(10, width);
		}
		TEST_METHOD(TestWidthFN_Max)
		{
			int width = 10;
			setWidth(100, &width);

			Assert::AreEqual(10, width);
		}

		TEST_METHOD(TestPerimeterFN)
		{
			int length = 1;
			int width = 1;
			int perimeter_reult = getPerimeter(&length, &width);
			Assert::AreEqual(3, perimeter_reult);

		}

		TEST_METHOD(TestAreaFN)
		{
			int length = 1;
			int width = 1;
			int area_reult = getArea(&length, &width);
			Assert::AreEqual(1, area_reult);
		}
	};
}
