#include "pch.h"
#include "CppUnitTest.h"
#include<F:\lpnu\labi\Lab_05_4\Lab_05_5\Lab_05_4.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 4;
			double N = k;
			double P = ((1. * k - N) / (k + N) + 1) * S1(N, k + 1);
			Assert::AreEqual(P, S1(N, N), 1e-1);
		}
	};
}
