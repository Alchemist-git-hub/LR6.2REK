#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2REK/pr6.2r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testPR62REK
{
	TEST_CLASS(testPR62REK)
	{
	public:
		
        TEST_METHOD(Test2)
        {
            int a[] = { 1, 2, 3, 4, 5, 6 };
            int expected[] = { 2, 1, 4, 3, 6, 5 };

            SwapRecursive(a, 6);

            for (int i = 0; i < 6; i++)
            {
                Assert::AreEqual(expected[i], a[i]);
            }
        }
	};
}
