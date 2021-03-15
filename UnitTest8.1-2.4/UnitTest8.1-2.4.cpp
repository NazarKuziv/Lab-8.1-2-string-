#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1-2(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8124
{
	TEST_CLASS(UnitTest8124)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string s;
			s = "123SQ456";
			ChangeSQ(s);

			Assert::AreEqual(s[3], '*');
		}
	};
}
